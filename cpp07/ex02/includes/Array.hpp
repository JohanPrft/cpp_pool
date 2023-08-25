#ifndef CPP07_ARRAY_HPP
# define CPP07_ARRAY_HPP

# include <iostream>

template <typename T>
class Array {

private:
	T * _array;
	unsigned int _size;

public:
	Array() : _array(NULL), _size(0) {}

	Array(unsigned int n) : _array(new T[n]), _size(n) {}

	Array(const Array &src) : _array(new T[src._size]), _size(src._size) {
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}

	Array &operator=(const Array &cpy) {
		if (this == &cpy)
			return (*this);
		if (_size != cpy._size) {
			delete [] _array;
			_size = cpy._size;
			_array = new T[_size];
		}
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = cpy._array[i];
		return (*this);
	}

	~Array(void) {
		delete[] _array;
	}

	class OutOfBoundException : public std::exception {
	public:
		char const * what(void) const throw(){
			return ("Out of bounds");
		}
	};

	T& operator[] (unsigned int index) {
		if (index > _size)
			throw OutOfBoundException();
		return (_array[index]);
	}

	unsigned int getSize() const {
		return (_size);
	}

};

template <typename T>
std::ostream &	operator<<(std::ostream &os, Array<T> &obj) {
	for (unsigned int i = 0; i < obj.getSize(); ++i) {
		os << "[" << obj[i] << "] ";
	}
	return (os);
}

#endif
