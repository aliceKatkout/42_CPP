/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:56:17 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/26 17:14:22 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _str("0") {};
ScalarConverter::ScalarConverter( ScalarConverter const &src ) { *this = src; };
ScalarConverter::~ScalarConverter( void ) {};

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const &src )
{
	(void) src;
	return *this;
}



bool isNumeric(std::string const &str)
{
    return !str.empty() && str.find_first_not_of("0123456789") == std::string::npos;
}

int		ScalarConverter::getType() {

}

void	ScalarConverter::convert( const std::string &str )
{
	int	type;

	_str = str;
	type = getType();

}

const char *		ScalarConverter::ImpossibleException::what( void ) const throw()
{
	return "impossible";
}

const char *		ScalarConverter::NonDisplayableException::what( void ) const throw()
{
	return "Non displayable";
}