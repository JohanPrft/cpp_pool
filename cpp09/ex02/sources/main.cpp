#include "../includes/PmergeMe.hpp"

int INT_MIN = std::numeric_limits<int>::min();
int INT_MAX = std::numeric_limits<int>::max();

template<typename T>
void printVector(const T& vec) {
	for (typename T::const_iterator num = vec.begin(); num != vec.end(); num++) {
		std::cout << *num << " ";
	}
	std::cout << std::endl;
}

std::vector<int> createVector(char **argv)
{
	std::vector<int> vector;
	long i = 1;
	while (argv[i])
	{
		errno = 0;
		long n = std::strtol(argv[i], NULL, 10);
		if (errno == ERANGE || n < INT_MIN || n > INT_MAX)
		{
			std::cout << "Error: " << n << " is not an int" << std::endl;
			++i;
			continue;
		}
		vector.push_back(static_cast<int>(n));
		++i;
	}
	return (vector);
}

std::deque<int> createDeque(char **argv)
{
	std::deque<int> vector;
	long i = 1;
	while (argv[i])
	{
		errno = 0;
		long n = std::strtol(argv[i], NULL, 10);
		if (errno == ERANGE || n < INT_MIN || n > INT_MAX)
		{
			std::cout << "Error: " << n << " is not an int" << std::endl;
			++i;
			continue;
		}
		vector.push_back(static_cast<int>(n));
		++i;
	}
	return (vector);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe 1 2 3 [...]" << std::endl;
		return 1;
	}
	std::vector<int> vec = createVector(argv);
	std::deque<int> vec1 = createDeque(argv);
	printVector(vec);
	printVector(vec1);
	PmergeMe::mergeInsertSort(vec, 0, vec.size() - 1);
	PmergeMe::mergeInsertSort(vec1, 0, vec1.size() - 1);
	printVector(vec);
	printVector(vec1);
	return 0;
}

