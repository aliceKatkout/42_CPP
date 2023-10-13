/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:04:19 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 13:48:16 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	FragTrap::setHit(100);
	FragTrap::setDamage(20);
	ScavTrap::setEnergy(50);
	std::cout << RED << "DiamondTrap " << _name << " is with us." << RESET << std::endl;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name), _name(name)
{
	FragTrap::setHit(100);
	FragTrap::setDamage(20);
	ScavTrap::setEnergy(50);
	std::cout << RED << "DiamondTrap " << _name << " is with us." << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "DiamondTrap " << _name << " has left the game." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) {
	(*this) = other;
	std::cout << RED << "DiamondTrap " << _name << " , a copy of " << other.getName() << " is with us." << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other) {
	_name = other._name;
	_hit = other._hit;
	_damage = other._damage;
	_energy = other._energy;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << _name << " has another name : " << ClapTrap::getName() << std::endl;
}
