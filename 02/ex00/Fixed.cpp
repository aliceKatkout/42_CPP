/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:36:35 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/09 16:23:36 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : _nb(obj._nb)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	_nb = f._nb;

	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}