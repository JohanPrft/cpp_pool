#include "../includes/RPN.hpp"

void calculateRPN(std::string const & str);
void parseString(std::string const & str);
int isStringDigits(std::string const & str);
int isSign(char c);

void RPN::calculateRPN(std::string const & str) {
	parseString(str);

	std::string::const_iterator it = str.begin();
	std::string::const_iterator ite = str.end();
	while (it != ite) {
		if (*it == ' ')
			;
		else if (isdigit(*it)) {
			{
				std::string::const_iterator ittemp = it;
				while (isdigit(*ittemp))
					ittemp++;
				std::string strValue(it, ittemp);
				_stack.push(std::strtol(strValue.c_str(), NULL, 10));
				it = ittemp - 1;
			}
		} else if (isSign(*it)) {
			if (_stack.size() < 2)
				throw RPN::BadRpnNotationException();
			double a = _stack.top();
			_stack.pop();
			double b = _stack.top();
			_stack.pop();
			//std::cout << b << *it << a << std::endl;
			if (*it == '+')
				_stack.push(b + a);
			else if (*it == '-')
				_stack.push(b - a);
			else if (*it == '*')
				_stack.push(b * a);
			else if (*it == '/') {
				if (a == 0)
					throw RPN::DivideByZeroException();
				_stack.push(b / a);
			}
		}
		it++;
	}
	if (_stack.size() != 1)
		throw RPN::BadRpnNotationException(); //stack should have only one element
	std::cout << _stack.top() << std::endl;
}

int isStringDigits(std::string const & str)
{
	std::string::const_iterator it = str.begin();
	std::string::const_iterator ite = str.end();

	while (it != ite)
	{
		if (!isdigit(*it))
			return 0;
		++it;
	}
	return 1;
}

void parseString(std::string const & str)
{
	std::string::const_iterator it = str.begin();
	std::string::const_iterator ite = str.end();

	while (it != ite)
	{
		if (!isdigit(*it) && !isSign(*it) && *it != ' ')
			throw RPN::BadRpnNotationException();
		if (isdigit(*it) && isSign(*(it + 1)))
			throw RPN::BadRpnNotationException();
		if (isSign(*it) && isSign(*(it + 1)))
			throw RPN::BadRpnNotationException();
		++it;
	}
}

int isSign(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return 1;
	return 0;
}

// COPLIEN FORM

RPN::RPN() {
}

RPN::RPN(const RPN &src) {
	_stack = src._stack;
}

RPN &RPN::operator=(const RPN &cpy) {
	if (this != &cpy) {
		_stack = cpy._stack;
	}
	return (*this);
}

RPN::~RPN() {
}
