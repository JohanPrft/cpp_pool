#include "../includes/RPN.hpp"


RPN::RPN() {

}

RPN::RPN(const RPN &src) {
	*this = src;
}

RPN &RPN::operator=(const RPN &cpy) {
	if (this != &cpy) {
	}
	return (*this);
}

RPN::~RPN() {

}
