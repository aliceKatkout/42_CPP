/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:54:50 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 17:45:49 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & );
		~ScalarConverter();

		ScalarConverter &	operator=( ScalarConverter const& );

		void				convert( const std::string &str );

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};

	private:
		const std::string		_str;
};

#endif