/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:04:19 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/11 16:43:32 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name"), FragTrap(name), _name(name)
{
	FragTrap::setHit(100);
	FragTrap::setDamage(20);
	ScavTrap::setEnergy(50);
	std::cout << CYAN << "DiamondTrap " << ScavTrap::getName() << " is with us." << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "DiamondTrap " << ScavTrap::getName() << " has left the game." << RESET << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << ScavTrap::getName() << " has another name : " << std::endl;
}