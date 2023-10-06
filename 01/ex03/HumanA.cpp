/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:49:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/06 15:29:58 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
	return ;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}