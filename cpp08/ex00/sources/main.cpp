#include "../includes/easyfind.hpp"

int main(void)
{
	std::vector<int> vector;
	vector.push_back(42);
	vector.push_back(21);
	vector.push_back(0);

	if (easyfind(vector, 21) != vector.end())
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not found" << std::endl;

	std::list<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);

	if (easyfind(list, 0) != list.end())
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}