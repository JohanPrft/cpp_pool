#ifndef CPP06_SCALARCONVERT_HPP
# define CPP06_SCALARCONVERT_HPP

# include <iostream>
# include <cstdlib>
#include <limits>
#include <climits>
# include <iomanip>
# include <cerrno>


class ScalarConvert {

private:
	ScalarConvert();
	~ScalarConvert();

public:
	ScalarConvert(const ScalarConvert &src);
	ScalarConvert &operator=(const ScalarConvert &cpy);

	static void    printChar(std::string charInStr, int isChar);
	static void    printInt(std::string str, int isChar);
	static void    printFloat(std::string str, int isChar);
	static void    printDouble(std::string str, int isChar);

	class ImpossibleException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class NonDisplayableException : public std::exception
	{
		virtual const char* what() const throw();
	};

	static void convert(std::string str);
};


#endif
