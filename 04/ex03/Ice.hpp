/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:43:05 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/17 14:58:17 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice &other);
		virtual ~Ice();

		Ice	&operator=(const Ice &other);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif