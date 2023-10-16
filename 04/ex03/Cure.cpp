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

Cure::Cure() : AMateria("Cure") {};
//Cure::Cure(const Cure &other) : AMateria(&other) {};
Cure::~Cure() {};

Cure &Cure::operator=(const Cure &other) {
	_type = other.getType();
	return (*this);
}