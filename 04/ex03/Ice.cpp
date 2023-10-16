/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:49:50 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 17:36:40 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};
//Ice::Ice(const Ice &other) : AMateria("ice") {};
Ice::~Ice() {};

Ice &Ice::operator=(const Ice &other) {
	_type = other.getType();
	return (*this);
}