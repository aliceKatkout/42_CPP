/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:29:23 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/20 14:16:17 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {};
AMateria::AMateria(const AMateria &other) {
	(*this) = other;
}
AMateria::~AMateria() {
	std::cout << "Delete AMateria" << std::endl;
};

AMateria &AMateria::operator=(const AMateria &other) {
	setType(other.getType());
	return (*this);
}

void	AMateria::setType(const std::string type) {
	_type = type;
}

std::string const &AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter& target) {
	(void) target;
};