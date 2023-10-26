/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:54:50 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/26 17:15:29 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <algorithm>

enum Types { error, char, int, float, double };

bool isNumeric(std::string const &str);

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter( ScalarConverter const &src );
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
		const std::string	_str;
		int					getType();

		char				toChar();
		int					toInt();
		float				toFloat();
		double				toDouble();
};

#endif