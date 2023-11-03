/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:56:17 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 13:49:01 by avedrenn         ###   ########.fr       */
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
	if (( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 )
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


void		ScalarConverter::setType() {
	long double test;
	if ( isChar() ) {
		_type = CHAR;
		_c = static_cast<char>(_str.c_str()[0]);
	} else if ( isInt() ) {
		_type = INT;
		test =  static_cast<long double>(std::strtod(_str.c_str(), NULL));;
		if (test > std::numeric_limits<int>::max() || test < std::numeric_limits<int>::min())
		{
			std::cout << "Value is out of numerics limits : ";
			throw(ScalarConverter::ImpossibleException());
		}
		else
			_i = static_cast<int>(std::strtod(_str.c_str(), NULL));
	} else if ( isFloat() ) {
		_type = FLOAT;
		test = static_cast<long double>(std::strtod(_str.c_str(), NULL));
		if (test > std::numeric_limits<float>::max() || test < std::numeric_limits<float>::min())
		{
			std::cout << "Value is out of numerics limits : ";
			throw(ScalarConverter::ImpossibleException());
		}
		else
			_f = static_cast<float>(std::strtod(_str.c_str(), NULL));

	} else if ( isDouble() ) {
		_type = DOUBLE;
		test = static_cast<long double>(std::strtod(_str.c_str(), NULL));
		if (test > std::numeric_limits<float>::max() || test < std::numeric_limits<float>::min())
		{
			std::cout << "Value is out of numerics limits : ";
			throw(ScalarConverter::ImpossibleException());
		}
		else
			_d = static_cast<double>(std::strtod(_str.c_str(), NULL));
	} else if ( isLiteral() ) {
		_type = LITERAL;
	} else {
		_type = NONE;
		std::cout << "Type of input is invalid : ";
		throw(ScalarConverter::ImpossibleException());
	}
}

char	ScalarConverter::toChar() {

	switch (_type) {
		case CHAR:
			return (_c);
		case INT:
			if ( _i > std::numeric_limits<char>::max() || _i < std::numeric_limits<char>::min())
				throw(ScalarConverter::ImpossibleException());
			else if (!isprint(static_cast<char>(_i)))
				throw(ScalarConverter::NonDisplayableException());
			else
				return (_c = static_cast<char>(_i));
		case FLOAT:
			if ( _f > std::numeric_limits<char>::max() || _f < std::numeric_limits<char>::min())
				throw(ScalarConverter::ImpossibleException());
			else if (!isprint(static_cast<char>(_f)))
				throw(ScalarConverter::NonDisplayableException());
			else
				return (_c = static_cast<char>(_f));
		case DOUBLE:
			if ( _d > std::numeric_limits<char>::max() || _d < std::numeric_limits<char>::min())
				throw(ScalarConverter::ImpossibleException());
			else if (!isprint(static_cast<char>(_d)))
				throw(ScalarConverter::NonDisplayableException());
			else
				return (_c = static_cast<char>(_d));
		case LITERAL:
			throw ScalarConverter::ImpossibleException();
	}
	return (_c);
}

int		ScalarConverter::toInt() {
	switch (_type) {
		case CHAR:
			return (_i = static_cast<int>(_c));
		case INT:
			return (_i);
		case FLOAT:
			if (_f > std::numeric_limits<int>::max() || _f < std::numeric_limits<int>::min())
				throw(ScalarConverter::ImpossibleException());
			else
				return (_i = static_cast<int>(_f));
		case DOUBLE:
			if (_d > std::numeric_limits<int>::max() || _d < std::numeric_limits<int>::min())
				throw(ScalarConverter::ImpossibleException());
			else
				return (_i = static_cast<int>(_d));
		case LITERAL:
			throw ScalarConverter::ImpossibleException();
	}
	return (_i);
}

float	ScalarConverter::toFloat() {
	switch (_type) {
		case CHAR:
			return (_f = static_cast<float>(_c));
		case INT:
			return (_f = static_cast<float>(_i));
		case FLOAT:
			return (_f);
		case DOUBLE:
			return (_f = static_cast<float>(_d));
		case LITERAL:
			if (( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 ))
				return (_f = std::numeric_limits<float>::quiet_NaN());
			else if ( ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 )
				|| ( _str.compare( "inf" ) == 0 ) || ( _str.compare( "inff" ) == 0 ))
				return(_f = std::numeric_limits<float>::infinity());
			else if ( ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 ))
				return(_f = -1 * (std::numeric_limits<double>::infinity()));
	}
	return (_f);
}

double	ScalarConverter::toDouble() {
	switch (_type) {
		case CHAR:
			return (_d = static_cast<double>(_c));
		case INT:
			return (_d = static_cast<double>(_i));
		case FLOAT:
			if (_f > std::numeric_limits<double>::max() || _f < std::numeric_limits<double>::min())
				throw(ScalarConverter::ImpossibleException());
			else
				return (_d = static_cast<double>(_f));
		case DOUBLE:
			if (_d > std::numeric_limits<double>::max() || _d < std::numeric_limits<double>::min())
				throw(ScalarConverter::ImpossibleException());
			else
				return (_d);
		case LITERAL:
			if (( _str.compare( "nan" ) == 0 ) || ( _str.compare( "nanf" ) == 0 ))
				return (std::numeric_limits<double>::quiet_NaN());
			else if ( ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 )
				|| ( _str.compare( "inf" ) == 0 ) || ( _str.compare( "inff" ) == 0 ))
				return(std::numeric_limits<double>::infinity());
			else if ( ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 ))
					return(-1 * (std::numeric_limits<double>::infinity()));
	}
	return (_d);
}

void	ScalarConverter::convert( const std::string &str )
{
	_str = str;
	_c = '0';
	_i = 0;
	_f = 0.0f;
	_d = 0.0;
	try {
			setType();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
		return ;
	}
	try {
			std::cout << "char : " << toChar() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
			std::cout << "int : " << toInt() << std::endl;
	} catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "float : " << toFloat();
		if (_type == LITERAL && !std::isnan(_f))
			std::cout << std::endl;
		else if (std::abs(_f - static_cast<int>(_f)) < 0.000001)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	} catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "double : " << toDouble();
		if (_type == LITERAL )
			std::cout << std::endl;
		else if (std::abs(_d - static_cast<int>(_d)) < 0.000001)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

const char *		ScalarConverter::ImpossibleException::what( void ) const throw()
{
	return "Impossible";
}

const char *		ScalarConverter::NonDisplayableException::what( void ) const throw()
{
	return "Non displayable";
}