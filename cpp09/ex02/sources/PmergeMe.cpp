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
