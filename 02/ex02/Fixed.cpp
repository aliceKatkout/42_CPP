/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:36:35 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/12 17:35:09 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {};

Fixed::Fixed(const int i)
{
	_value = i << _static_frac;
}

Fixed::Fixed(const float f)
{
	_value = roundf(f * ( 1 << _static_frac ));
}

Fixed::Fixed(const Fixed & obj)
{
	*this = obj;
}

Fixed::~Fixed() {};

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / ( 1 << _static_frac));
}

int	Fixed::toInt(void) const
{
	return (_value >> _static_frac);
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	_value = obj.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &f)
{
	return (os << f.toFloat());
}

bool	Fixed::operator>(const Fixed &obj)
{
	if (obj.toFloat() > this->toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &obj)
{
	if (obj.toFloat() < this->toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &obj)
{
	if (obj.toFloat() >= this->toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &obj)
{
	if (obj.toFloat() <= this->toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &obj)
{
	if (obj.toFloat() == this->toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &obj)
{
	if (obj.toFloat() != this->toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator + (const Fixed &obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
};

Fixed	Fixed::operator - (const Fixed &obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
};

Fixed	Fixed::operator * (const Fixed &obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
};

Fixed	Fixed::operator / (const Fixed &obj) const
{
	return Fixed(this->toFloat() / obj.toFloat());
};

Fixed&	Fixed::operator ++ (void)
{
	_value += 1;
	return (*this);
};

Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
};

Fixed&	Fixed::operator -- ()
{
	_value -= 1;
	return (*this);
};

Fixed	Fixed::operator -- (int)
{
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
};

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}