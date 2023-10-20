/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:49:50 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 17:08:20 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {};
Cure::Cure(const Cure &other) : AMateria(other._type) {};
Cure::~Cure() {};

Cure &Cure::operator=(const Cure &other) {
	_type = other.getType();
	return (*this);
}

AMateria*	Cure::clone() const {
	AMateria	*clone;

	clone = new Cure();
	return ( clone);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}