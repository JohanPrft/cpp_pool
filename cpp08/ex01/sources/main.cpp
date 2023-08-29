#include "../includes/Span.hpp"

int main(void)
{
	Span span(10000);
	std::cout << "Adding 10000 random numbers..." << std::endl;
	try
	{
		span.addNumberRange(span.getMaxElements(), 100000);
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