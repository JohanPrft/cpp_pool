#ifndef CPP08_SPAN_HPP
# define CPP08_SPAN_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>
#include <cstdlib>

class Span {

private:
	Span();

	unsigned int _maxElements;
	std::vector<int> _v;
	// set because: the elements are unique and sorted

public:
	Span(unsigned int n);
	Span(const Span &src);
	Span &operator=(const Span &cpy);
	~Span();

	unsigned int const & getMaxElements() const;
	void addNumber(int n);
	void addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();

	class ArrayIsFullException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class NotEnoughNumbersException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};


#endif
