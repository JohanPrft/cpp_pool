#include "../includes/Span.hpp"

Span::Span() {
	_maxElements = 0;
}

Span::Span(unsigned int n) {
	_maxElements = n;
}

Span::Span(const Span &src) {
	_maxElements = src._maxElements;
	_v = src._v;
}

Span &Span::operator=(const Span &cpy) {
	if (this != &cpy) {
		_maxElements = cpy._maxElements;
		_v = cpy._v;
	}
	return (*this);
}

Span::~Span() {
}

const char *Span::ArrayIsFullException::what() const throw() {
	return ("Array is full");
}

const char *Span::NotEnoughNumbersException::what() const throw() {
	return ("Not enough numbers");
}

unsigned int const & Span::getMaxElements() const {
	return (_maxElements);
}

void Span::addNumber(int const n) {
	if (_v.size() >= _maxElements)
		throw ArrayIsFullException();
	_v.insert(n);
}

// ! Pre-increment is needed to operate on iterators

int Span::shortestSpan() {
	if (_v.size() < 2)
		throw NotEnoughNumbersException();
	std::set<int>::iterator it = _v.begin();
	std::set<int>::iterator it2 = ++_v.begin();
	return (*it2 - *it);
}

int Span::longestSpan() {
	if (_v.size() < 2)
		throw NotEnoughNumbersException();
	std::set<int>::iterator it = _v.begin();
	std::set<int>::iterator ite = --_v.end(); //points the last value
	return (*ite - *it);
}

void Span::addNumberRange(unsigned int count, int max)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < count; i++)
		_v.insert(rand() % max);
}
