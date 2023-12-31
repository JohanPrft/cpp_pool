#include "../includes/PmergeMe.hpp"

int INT_MIN = std::numeric_limits<int>::min();
int INT_MAX = std::numeric_limits<int>::max();

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
	clock_t startTime;
	clock_t endTime;
	double timeElapsed;
	startTime = clock();
	std::vector<int> vec = createVector(argv); //contiguous in memory
	std::cout << "Before: " << vec << std::endl;
	PmergeMe::mergeInsertSort(vec, 0, vec.size() - 1);
	endTime = clock();
	timeElapsed = (double)(endTime - startTime) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time elapsed by vector: " << timeElapsed << "ms" << std::endl;
	std::cout << "After: " << vec << std::endl;
	std::cout << std::endl;
	startTime = clock();
	std::deque<int> vec1 = createDeque(argv); //efficient for add front
	std::cout << "Before: " << vec1 << std::endl;
	PmergeMe::mergeInsertSort(vec1, 0, vec1.size() - 1);
	endTime = clock();
	timeElapsed = (double)(endTime - startTime) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time elapsed by deque: " << timeElapsed << "ms" << std::endl;
	std::cout << "After: " << vec1 << std::endl;
	return 0;
}

