/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:54:50 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/30 15:33:19 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <limits>

enum Types { NONE, CHAR, INT, FLOAT, DOUBLE, LITERAL };

bool isNumeric(std::string const &str);

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter();

		ScalarConverter &	operator=( ScalarConverter const &src );

		void				convert( const std::string &str );

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

	private:
		std::string		_str;
		int				_type;

		//bool			_impossible;

		char			_c;
		int				_i;
		float			_f;
		double			_d;

		void			setType();

		bool			isChar();
		bool			isInt();
		bool			isFloat();
		bool			isDouble();
		bool			isLiteral();

		char			toChar();
		int				toInt();
		float			toFloat();
		double			toDouble();
		void			printChar();
};

#endif