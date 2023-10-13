/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:33:42 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 12:17:46 by avedrenn         ###   ########.fr       */
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

void	ScavTrap::guardGate() {
	std::cout << _name << " is now in gate keeper mode." << std::endl;
}