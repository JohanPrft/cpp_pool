#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

private:
	int				_value;
	static const int _binaryPointPos = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &cpy);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif
