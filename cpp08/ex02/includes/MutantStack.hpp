#ifndef CPP08_MUTANTSTACK_HPP
# define CPP08_MUTANTSTACK_HPP

// https://cplusplus.com/reference/stack/stack/?kw=stack

class MutantStack {

private:

public:
	MutantStack();
	MutantStack(const MutantStack &src);
	MutantStack &operator=(const MutantStack &cpy);
	~MutantStack();

};


#endif
