/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:36:35 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/10 12:30:24 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_value = i;
	this->toFloat();
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_value = roundf(f * ( 1 << _static_frac ));

}

Fixed::Fixed(const Fixed & obj) : _value(obj._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / ( 1 << _static_frac));
}

int	Fixed::toInt(void) const
{
	return ((int) _value);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed & Fixed::operator=(const Fixed & f)
{
	_value = f._value;

	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}
