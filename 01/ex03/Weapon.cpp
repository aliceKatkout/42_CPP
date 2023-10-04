/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:02:29 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 18:06:16 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
	return;
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	_type = type;
	return ;
}

std::string	&Weapon::getType()
{
	return (&_type);
}