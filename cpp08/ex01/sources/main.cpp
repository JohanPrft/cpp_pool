#include "../includes/Span.hpp"

int main(void)
{
	std::srand(time(NULL));

	std::vector<int> generateNumbers;
	generateNumbers.reserve(15000);
	for (int i = 0; i < 15000; i++)
		generateNumbers.push_back(rand());
	std::random_shuffle(generateNumbers.begin(), generateNumbers.end());

	Span span(15000);
	std::cout << "Adding 15000 random numbers..." << std::endl;
	try
	{
		span.addNumberRange(generateNumbers.begin(), generateNumbers.end());
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}