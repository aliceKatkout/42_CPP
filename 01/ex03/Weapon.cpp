/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:02:29 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/06 15:32:09 by avedrenn         ###   ########.fr       */
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

const std::string	&Weapon::getType() const
{
	return (_type);
}