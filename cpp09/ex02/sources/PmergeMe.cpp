#include "../includes/PmergeMe.hpp"

// COPLIEN FORM

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(const PmergeMe &src) {
	*this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &cpy) {
	if (this != &cpy) {
	}
	return (*this);
}

PmergeMe::~PmergeMe() {

}

std::ostream& operator<<(std::ostream& os, std::vector<int> const & vec)
{
	for (std::vector<int>::const_iterator num = vec.begin(); num != vec.end(); num++) {
		os << *num << " ";
	}
	return os;
}


std::ostream& operator<<(std::ostream& os, std::deque<int> const & vec)
{
	for (std::deque<int>::const_iterator num = vec.begin(); num != vec.end(); num++) {
		os << *num << " ";
	}
	return os;
}
