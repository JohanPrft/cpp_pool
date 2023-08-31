#ifndef CPP09_BITCOINEXCHANGE_HPP
# define CPP09_BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <fstream>
# include <map>

extern std::string DATA_CSV_NAME;

struct csvLineFormat
{
	std::string date;
	float price;
};

struct inputLineFormat
{
	std::string date;
	float value;
};

class BitcoinExchange {

private:
	std::map<std::string, float> _database;

	float getPrice(std::string const & date);
	void printConvert(inputLineFormat const & inputLine);

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
	BitcoinExchange &operator=(const BitcoinExchange &cpy);
	~BitcoinExchange();

	void setDatabase(std::string const & fileName);
	void convertInput(std::string const & input);

	class BadDatabaseParsingException : public std::exception {
	public:
		const char *what() const throw() {
			return "data.csv should be formatted as \"YYYY-MM-DD,intPrice\"";
		}
	};

	class BadInputParsingException : public std::exception {
	public:
		const char *what() const throw() {
			return "line should be formatted as \"date | value\"";
		}
	};

	class NegNumberParsingException : public std::exception {
	public:
		const char *what() const throw() {
			return "can't use negative numbers";
		}
	};

	class TooLargeParsingException : public std::exception {
	public:
		const char *what() const throw() {
			return "too large: value < 1000";
		}
	};
};


#endif
