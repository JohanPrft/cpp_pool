#ifndef CPP07_HEADER_HPP
# define CPP07_HEADER_HPP

# include <iostream>

//- swap : Intervertit les valeurs de deux arguments donnés. Ne retourne rien.
//• min : Compare les deux valeurs passées en argument et retourne la plus petite des
//		deux. Si les deux sont équivalentes, alors retourne la seconde.
//• max : Compare les deux valeurs passées en argument et retourne la plus grande
//des deux. Si les deux sont équivalentes, alors retourne la seconde.


template <typename T>
void	swap(T& a, T& b)
{
	std::cout << "swap" << std::endl;
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T		min(T const & a, T const & b)
{
	std::cout << "min = ";
	if (a < b)
		return a;
	return b;
}

template <typename T>
T		max(T const & a, T const & b)
{
	std::cout << "max = ";
	if (a > b)
		return a;
	return b;
}

#endif //CPP07_HEADER_HPP
