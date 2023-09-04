#include "../includes/PmergeMe.hpp"

void printVector(const std::vector<int>& vec) {
	for (std::vector<int>::const_iterator num = vec.begin(); num != vec.end(); num++) {
		std::cout << *num << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	v.push_back(7);
	v.push_back(6);
	v.push_back(4);

	std::cout << "Given vector is:\n";
	printVector(v);
	PmergeMe::mergeInsertSort(v, 0, v.size() - 1);
	std::cout << "\nSorted vector is:\n";
	printVector(v);
	return 0;
}
