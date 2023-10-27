/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:56:17 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/27 16:34:06 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _str("0") {
	_c = '0';
	_i = 0;
	_f = 0.0f;
	_d = 0.0;
};
ScalarConverter::ScalarConverter( ScalarConverter const &src ) {
	(*this) = src;
};
ScalarConverter::~ScalarConverter( void ) {};

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const &src )
{
	if (this != &src)
	{
		_c = src._c;
		_i = src._i;
		_f = src._f;
		_d = src._d;
		_type = src._type;
		_str = src._str;
	}
	return *this;
}

bool	ScalarConverter::isChar( void ) {
	return _str.length() == 1 && std::isalpha( _str[0] ) && std::isprint( _str[0] );
}

bool	ScalarConverter::isLiteral( void ) {
	if ( ( _impossible ) || ( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 )
		|| ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 )
		|| ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 )
		|| ( _str.compare( "inf" ) == 0 ) || ( _str.compare( "inff" ) == 0 )) {
		return true;
	}
	return false;
}

bool	ScalarConverter::isInt() {
	std::size_t pos = 0;
	if (_str.length() > 1 && (_str[0] == '+' || _str[0] == '-'))
		pos = 1;
	return !_str.empty() && _str.find_first_not_of("0123456789", pos) == std::string::npos;
}

bool	ScalarConverter::isFloat() {
	if ( _str.find_first_not_of(".f0123456789") == std::string::npos && _str.find('f') != std::string::npos)
		return (true);
	return (false);
}

bool	ScalarConverter::isDouble() {
	if (_str.find_first_not_of(".f0123456789") == std::string::npos && _str.find('f') == std::string::npos)
		return (true);
	return (false);
}

void	ScalarConverter::printChar( void ) {
	if ( isLiteral() || ( !std::isprint( _i ) && ( _i >= 127 ) ) ) {
		std::cout << "Impossible";
	} else if ( !std::isprint( _i ) ) {
		std::cout << "Non displayable";
	} else {
		std::cout << "'" << _c << "'";
	}
	std::cout << _str << " : " << std::endl;
}


void		ScalarConverter::setType() {
	if ( isChar() ) {
		_type = CHAR;
		std::cout << _str << " : char" << std::endl;
	} else if ( isInt() ) {
		_type = INT;
		std::cout << _str << " : int" << std::endl;
	} else if ( isFloat() ) {
		_type = FLOAT;
		std::cout << _str << " : float" << std::endl;
	} else if ( isDouble() ) {
		_type = DOUBLE;
		std::cout << _str << " : double" << std::endl;
	} else if ( isLiteral() ) {
		_type = LITERAL;
		std::cout << _str << " : literal" << std::endl;
	} else {
		_type = NONE;
		std::cout << _str << " : none" << std::endl;
	}
}

void	ScalarConverter::convert( const std::string &str )
{
	_str = str;
	setType();

}

const char *		ScalarConverter::ImpossibleException::what( void ) const throw()
{
	return "Impossible";
}

const char *		ScalarConverter::NonDisplayableException::what( void ) const throw()
{
	return "Non displayable";
}