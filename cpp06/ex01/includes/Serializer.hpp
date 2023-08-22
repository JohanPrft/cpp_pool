#ifndef CPP06_SERIALIZER_HPP
# define CPP06_SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	std::string	str;
	int			nb;
};

class Serializer {

private:

public:
	Serializer();
	Serializer(const Serializer &src);
	Serializer &operator=(const Serializer &cpy);
	~Serializer();

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};


#endif
