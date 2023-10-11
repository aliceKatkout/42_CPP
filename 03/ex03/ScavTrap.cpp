/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:33:42 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/11 15:48:32 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHit(100);
	setDamage(20);
	setEnergy(50);
	std::cout << CYAN << "ScavTrap " << getName() << " is with us." << RESET << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << MAGENTA << "ScavTrap " << getName() << " has left this world." << RESET << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << getName() << " is now in gate keeper mode." << std::endl;
}