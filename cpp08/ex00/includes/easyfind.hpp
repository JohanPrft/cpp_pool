#ifndef CPP08_EASYFIND_HPP
# define CPP08_EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
typename T::const_iterator easyfind(T const & intContainer, int const & n)
{
	typename T::const_iterator it = intContainer.begin();
	typename T::const_iterator ite = intContainer.end();

	typename T::const_iterator find = std::find(it, ite, n);
	return (find);
}

#endif
