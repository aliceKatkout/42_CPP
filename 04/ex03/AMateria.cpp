/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:29:23 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 14:46:18 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {};
AMateria::AMateria(const AMateria &other) {
	(*this) = other;
}
AMateria::~AMateria() {};

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
