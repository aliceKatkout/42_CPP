/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:16:06 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/09 16:44:25 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		~Fixed();

		Fixed	(const Fixed &obj);

		//Fixed&	operator=(const Fixed&);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_nb;
		const static int	_static_nb = 8;
};


#endif