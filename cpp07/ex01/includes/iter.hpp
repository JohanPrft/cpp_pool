#ifndef CPP07_ITER_HPP
# define CPP07_ITER_HPP

# include <iostream>

template <typename T>
void print(T const & toPrint) {
	std::cout << toPrint << std::endl;
}

template <typename T>
void iter(T* tab, int tabSize, void (*func)(const T&)) {
	for (int i = 0; i < tabSize; i++)
		func(tab[i]);
}

#endif //CPP07_ITER_HPP
