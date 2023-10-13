/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:33:42 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 13:37:49 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHit(100);
	setDamage(20);
	setEnergy(50);
	std::cout << CYAN << "ScavTrap " << getName() << " is with us." << RESET << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap() {
	setHit(100);
	setDamage(20);
	setEnergy(50);
	std::cout << CYAN << "ScavTrap " << getName() << " is with us." << RESET << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << CYAN << "ScavTrap " << getName() << " has left this world." << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) {
	other = (*this);
	std::cout  << CYAN << _name << " , a copy of " << other._name << "join the fight !" << RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap	&other) {
	_name = other._name;
	_hit = other._hit;
	_damage = other._damage;
	_energy = other._energy;
	return (*this);
}


void	ScavTrap::guardGate() {
	std::cout << getName() << " is now in gate keeper mode." << std::endl;
}