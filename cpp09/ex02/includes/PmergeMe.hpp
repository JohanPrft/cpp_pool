#ifndef CPP09_PMERGEME_HPP
# define CPP09_PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class PmergeMe {

private:
	PmergeMe();
	PmergeMe(const PmergeMe &src);
	PmergeMe &operator=(const PmergeMe &cpy);
	~PmergeMe();

	std::vector<int> _vector;


public:
	static void mergeInsertSort(std::vector<int>& array, int left, int right);
};


#endif
