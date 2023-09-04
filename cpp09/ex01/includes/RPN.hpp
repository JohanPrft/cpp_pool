#ifndef CPP09_RPN_HPP
# define CPP09_RPN_HPP

# include <iostream>
# include <stack>
# include <stdlib.h>
# include <algorithm>

class RPN {

private:
	std::stack<double> _stack;

public:
	RPN();
	RPN(const RPN &src);
	RPN &operator=(const RPN &cpy);
	~RPN();

	class BadRpnNotationException : public std::exception {
	public:
		const char *what() const throw() {
			return "Bad RPN notation.";
		}
	};

	class TooBigNumberException : public std::exception {
	public:
		const char *what() const throw() {
			return "Number too big.";
		}
	};

	class DivideByZeroException : public std::exception {
	public:
		const char *what() const throw() {
			return "Can't divide by 0.";
		}
	};

	void calculateRPN(std::string const & str);
};

#endif
