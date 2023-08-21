#ifndef CPP06_SCALARCONVERT_HPP
# define CPP06_SCALARCONVERT_HPP

# include <iostream>

class ScalarConvert {

private:
	ScalarConvert();
	~ScalarConvert();

public:
	ScalarConvert(const ScalarConvert &src);
	ScalarConvert &operator=(const ScalarConvert &cpy);

	void convert(std::string str)
};


#endif
