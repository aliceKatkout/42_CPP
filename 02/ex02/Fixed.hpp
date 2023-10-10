/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:16:06 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/10 17:46:03 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float i);
		~Fixed();

		Fixed	(const Fixed &obj);

		Fixed&	operator = (const Fixed &obj);

		bool	operator > (const Fixed &obj);
		bool	operator < (const Fixed &obj);
		bool	operator >= (const Fixed &obj);
		bool	operator <= (const Fixed &obj);
		bool	operator == (const Fixed &obj);
		bool	operator != (const Fixed &obj);

		Fixed	operator + (const Fixed &obj) const;
		Fixed	operator - (const Fixed &obj) const;
		Fixed	operator * (const Fixed &obj) const;
		Fixed	operator / (const Fixed &obj) const;

		Fixed&	operator ++ ();
		Fixed&	operator ++ (int);
		Fixed&	operator -- ();
		Fixed&	operator -- (int);

		static Fixed& min( Fixed &a, Fixed &b );
		static const Fixed& min( const Fixed &a, const Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static const Fixed& max( const Fixed &a, const Fixed &b );

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_value;
		const static int	_static_frac = 8;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &f);

#endif