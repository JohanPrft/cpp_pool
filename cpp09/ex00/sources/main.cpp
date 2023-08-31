#include "../includes/BitcoinExchange.hpp"

std::string DATA_CSV_NAME = "data.csv";

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2){
		std::cout << "Usage: ./btc <inputFile>" << std::endl;
		return 1;
	}
	BitcoinExchange btc;
	try {
		btc.setDatabase(DATA_CSV_NAME);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	try {
		btc.convertInput(argv[1]);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}
