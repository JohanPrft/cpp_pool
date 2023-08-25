#include "../includes/Array.hpp"

int main(void)
{
	Array<std::string> array1;
	std::cout << "Array default size: " <<array1.getSize() << std::endl;
	std::cout << std::endl;

	Array<int> array2(5);
	std::cout << "Array 2 size: " << array2.getSize() << std::endl;
	for (unsigned int i = 0; i < array2.getSize(); i++)
		array2[i] = i;
	std::cout << "Array 2 content: " << array2 << std::endl;
	std::cout << std::endl;

	Array<std::string> array3(2);
	std::cout << "Array 3 size: " << array3.getSize() << std::endl;
	std::cout << "Array 3 content: " << array3 << std::endl;
	array3[0] = "Hello";
	array3[1] = "World";
	std::cout << "Array 3 content: " << array3 << std::endl;
	std::cout << std::endl;

	Array<std::string> array4(array3);
	std::cout << "Array 4 size: " << array4.getSize() << std::endl;
	std::cout << "Array 4 content: " << array4 << std::endl;
	std::cout << std::endl;

	Array<int> array5;
	array5 = array2;
	std::cout << "Array 5 size: " << array5.getSize() << std::endl;
	std::cout << "Array 5 content: " << array5 << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "Array 5 content: " << array5[10] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}