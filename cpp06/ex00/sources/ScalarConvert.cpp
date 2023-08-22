#include "../includes/ScalarConvert.hpp"

ScalarConvert::ScalarConvert() {

}

ScalarConvert::ScalarConvert(const ScalarConvert &src) {
	*this = src;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &cpy) {
	(void)cpy;
	return (*this);
}

ScalarConvert::~ScalarConvert() {

}

void ScalarConvert::printChar(std::string const charInStr, int isChar) {
	if (isChar)
	{
		char c = charInStr[0];
		if (c < 32 || c > 126)
			throw NonDisplayableException();
		std::cout << "'" << c << "'" << std::endl;
		return;
	}
	int charInInt = std::atoi(charInStr.c_str());
	if (charInInt < 0 || (charInInt == 0 && charInStr[0] != '0'))
		throw ImpossibleException();
	if (charInInt < 32 || charInInt > 126)
		throw NonDisplayableException();
	char charInChar = static_cast<char>(charInInt);
	std::cout << charInChar << std::endl;
}

void ScalarConvert::printInt(std::string const intInStr, int isChar) {
	if (isChar)
	{
		int charInInt = static_cast<int>(intInStr[0]);
		std::cout << charInInt << std::endl;
		return;
	}
	long charInInt = std::strtol(intInStr.c_str(), NULL, 0);
	if (charInInt == 0 && intInStr[0] != '0')
		throw ImpossibleException();
	if (charInInt < INT_MIN || charInInt > INT_MAX || errno == ERANGE)
		throw ImpossibleException();
	std::cout << charInInt << std::endl;
}

void ScalarConvert::printFloat(std::string const floatInStr, int isChar) {
	if (isChar)
	{
		float charInFloat = static_cast<float>(floatInStr[0]);
		std::cout << std::fixed << std::setprecision(1) << charInFloat << "f" << std::endl;
		return;
	}
	float charInFloat = std::strtof(floatInStr.c_str(), NULL);
	if (charInFloat == 0 && floatInStr[0] != '0')
		throw ImpossibleException();
	if (errno == ERANGE)
		throw ImpossibleException();
	std::cout << std::fixed << std::setprecision(1) << charInFloat << "f" << std::endl;
}

void ScalarConvert::printDouble(std::string const doubleInStr, int isChar) {
	if (isChar)
	{
		double charInDouble = static_cast<double>(doubleInStr[0]);
		std::cout << std::fixed << std::setprecision(1) << charInDouble << std::endl;
		return;
	}
	else if (doubleInStr.length() > 31)
		throw ImpossibleException();
	double charInDouble = std::strtod(doubleInStr.c_str(), NULL);
	if (errno == ERANGE)
		throw ImpossibleException();
	std::cout << std::fixed << std::setprecision(1) << charInDouble << std::endl;

}

int	isStrAloneChar (std::string const str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return (true);
	return (false);
}


void ScalarConvert::convert(std::string const str) {
	int isChar = isStrAloneChar(str);
	try
	{
		std::cout << "char	: ";
		printChar(str, isChar);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "int	: ";
		printInt(str, isChar);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "float	: ";
		printFloat(str, isChar);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "double	: ";
		printDouble(str, isChar);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

const char *ScalarConvert::ImpossibleException::what() const throw() {
	return "impossible";
}

const char *ScalarConvert::NonDisplayableException::what() const throw() {
	return "non displayable";
}
