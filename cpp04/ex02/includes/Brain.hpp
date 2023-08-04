#ifndef CPP_POOL_BRAIN_HPP
# define CPP_POOL_BRAIN_HPP

# include <iostream>

class Brain {

private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &cpy);
	~Brain();

};


#endif
