#include "../includes/BitcoinExchange.hpp"

void setDatabase(std::string const & fileName);
csvLineFormat parseLineDatabase(std::string const & line);
float convertPriceToInt(std::string const & price);
void parsePrice (std::string const & price);
int parseDate(std::string const & date);

void convertInput(const std::string &input);
inputLineFormat parseLineInput (std::string const & line);
float getPrice(std::string const & date);
void printConvert(inputLineFormat const & inputLine);

void BitcoinExchange::setDatabase(std::string const & fileName) {
	std::ifstream ifs;
	csvLineFormat csvLine;
	ifs.open(fileName.c_str());
	if (!ifs)
		throw std::ios_base::failure("Failed to open file: " + fileName);
	std::string line;
	getline(ifs, line); // skip first template line
	while (getline(ifs, line))
	{
		csvLine = parseLineDatabase(line);
		_database[csvLine.date] = csvLine.price;
	}
	std::cout << "DB created, contains " << _database.size() << " dates and price" << std::endl;
}

csvLineFormat parseLineDatabase(std::string const & line)
{
	csvLineFormat csvLine;
	size_t commaPos = line.find(',');
	if (commaPos == std::string::npos)
		throw BitcoinExchange::BadDatabaseParsingException();
	std::string datePart = line.substr(0, commaPos);
	if (parseDate(datePart))
		throw BitcoinExchange::BadDatabaseParsingException();
	csvLine.date = datePart;
	std::string pricePart = line.substr(commaPos + 1);
	parsePrice(pricePart);
	csvLine.price = convertPriceToInt(pricePart);
	return csvLine;
}

float convertPriceToInt(std::string const & price)
{
	errno = 0;
	float result = std::strtof(price.c_str(), NULL);
	if (errno == ERANGE)
		throw BitcoinExchange::BadDatabaseParsingException();
	return result;
}

void parsePrice (std::string const & price)
{
	if (price.length() < 1)
		throw BitcoinExchange::BadDatabaseParsingException();
	for (size_t i = 0; i < price.length(); i++)
	{
		if (!isdigit(price[i]) && price[i] != '.')
			throw BitcoinExchange::BadDatabaseParsingException();
	}
}

int parseDate(std::string const & date)
{
	if (date.length() != 10)
		return 1;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return 1;
	}
	return 0;
}

void parseValuePart(std::string const & value) {
	if (value.length() < 1)
		throw BitcoinExchange::BadInputParsingException();
	for (size_t i = 0; i < value.length(); i++)
	{
		if (!isdigit(value[i]) && value[i] != '.' && value[i] != '-' && value[i] != '+')
			throw BitcoinExchange::BadInputParsingException();
	}
}

float convertValueToFloat(std::string const & value) {
	errno = 0;
	float result = std::strtof(value.c_str(), NULL);
	if (errno == ERANGE)
		throw BitcoinExchange::BadInputParsingException();
	if (result < 0)
		throw BitcoinExchange::NegNumberParsingException();
	if (result > 1000)
		throw BitcoinExchange::TooLargeParsingException();
	return result;
}


void BitcoinExchange::convertInput(const std::string &input) {
	std::ifstream ifs;
	inputLineFormat inputLine;
	ifs.open(input.c_str());
	if (!ifs)
		throw std::ios_base::failure("Failed to open file: " + input);
	std::string line;
	getline(ifs, line); // skip first template line
	while (getline(ifs, line))
	{
		try {
			inputLine = parseLineInput(line);
			printConvert(inputLine);
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
			continue;
		}
	}
}

inputLineFormat parseLineInput (std::string const & line) {
	inputLineFormat inputLine;
	size_t colonPos = line.find('|');
	if (colonPos == std::string::npos)
		throw BitcoinExchange::BadInputParsingException();
	std::string datePart = line.substr(0, colonPos - 1); // -1 to remove space
	if (parseDate(datePart))
		throw BitcoinExchange::BadInputParsingException();
	inputLine.date = datePart;
	std::string valuePart = line.substr(colonPos + 2); // +2 to remove | and space
	parseValuePart(valuePart);
	float value = convertValueToFloat(valuePart);
	inputLine.value = value;
	return inputLine;
}

float BitcoinExchange::getPrice(std::string const & date) {
	if (_database.empty())
		throw std::out_of_range("Database is empty");
	if (_database.find(date) != _database.end())
		return _database[date];
	std::map<std::string, float>::iterator it = _database.lower_bound(date); //find the first key >= to the ref
	if (it == _database.begin()  || it == _database.end())
		throw std::out_of_range("No price found for date: " + date);
	it--;
	return it->second;
}

void BitcoinExchange::printConvert(inputLineFormat const & inputLine)
{
	float price = getPrice(inputLine.date) * inputLine.value;
	std::cout << inputLine.date << " => " << inputLine.value << " BTC" << " = " << price << std::endl;
}

// COPLIEN FORM

BitcoinExchange::BitcoinExchange() {
	_database.clear();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	_database = src._database;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &cpy) {
	if (this != &cpy) {
		_database = cpy._database;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {
}
