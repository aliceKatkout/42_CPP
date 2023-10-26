/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:56:17 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 18:00:57 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _str("0") {};
ScalarConverter::ScalarConverter( ScalarConverter const & src ) { *this = src; };
ScalarConverter::~ScalarConverter( void ) {};

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const & src )
{
	(void) src;
	return *this;
}

void				ScalarConverter::convert( const std::string &str )
{
	_str = str;
	
	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(std::stoi(str));
		if (c < 32 || c > 126)
			throw NonDisplayableException();
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(std::stoi(str)) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try
	{
		std::cout << static_cast<float>(std::stof(str)) << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(std::stod(str)) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *		ScalarConverter::ImpossibleException::what( void ) const throw()
{
	return "impossible";
}

const char *		ScalarConverter::NonDisplayableException::what( void ) const throw()
{
	return "Non displayable";
}