/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:02:27 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/19 12:17:57 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		virtual ~AMateria();

		AMateria	&operator=(const AMateria &other);

		std::string const	&getType() const; //Returns the materia type
		void				setType(std::string type);
		virtual				AMateria* clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif