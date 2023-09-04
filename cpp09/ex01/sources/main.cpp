#include "../includes/RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./RPN \"3 4 + 5 *\"" << std::endl;
		return 1;
	}
	RPN rpn;
	try {
		rpn.calculateRPN(argv[1]);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
