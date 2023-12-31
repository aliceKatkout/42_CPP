/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:49:50 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/20 15:05:02 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};
Ice::Ice(const Ice &other) : AMateria(other._type) {};
Ice::~Ice() {};

Ice &Ice::operator=(const Ice &other) {
	_type = other.getType();
	return (*this);
}

AMateria*	Ice::clone() const {
	AMateria	*clone;

	clone = new Ice();
	return (clone);
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}