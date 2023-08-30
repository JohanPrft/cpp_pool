#ifndef CPP08_MUTANTSTACK_HPP
# define CPP08_MUTANTSTACK_HPP

// https://cplusplus.com/reference/stack/stack/?kw=stack

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{

private:

public:
	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack &src) : std::stack<T>(src) {}
	MutantStack &operator=(const MutantStack &cpy) {std::stack<T>::operator=(cpy);}
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){return (std::stack<T>::c.begin());}
	iterator end() {return (std::stack<T>::c.end());}

	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const {return (std::stack<T>::c.begin());}
	const_iterator end() const {return (std::stack<T>::c.end());}

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin() {return (std::stack<T>::c.rbegin());}
	reverse_iterator rend() {return (std::stack<T>::c.rend());}

	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator rbegin() const {return (std::stack<T>::c.rbegin());}
	const_reverse_iterator rend() const {return (std::stack<T>::c.rend());}
};


#endif
