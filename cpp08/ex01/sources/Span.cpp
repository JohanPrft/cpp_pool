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
	_v.push_back(n);
}

// ! Pre-increment is needed to operate on iterators

int Span::shortestSpan() {
	if (_v.size() < 2)
		throw NotEnoughNumbersException();

	std::sort(_v.begin(), _v.end());
	int    min = _v[1] - _v[0];
	for (unsigned int i = 2; i < _v.size(); i++)
	{
		if ((_v[i] - _v[i - 1]) < min)
			min = _v[i] - _v[i - 1];
	}
	return (min);
}

int Span::longestSpan() {
	if (_v.size() < 2)
		throw NotEnoughNumbersException();

	std::sort(_v.begin(), _v.end());
	return (_v[_v.size() - 1] - _v[0]);
}

void    Span::addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v.size() >= _maxElements)
		throw ArrayIsFullException();
	_v.insert(_v.end(), begin, end);
}


