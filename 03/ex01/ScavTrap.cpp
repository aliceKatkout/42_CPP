/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:33:42 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/11 15:26:44 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
	setName(name);
	setHit(100);
	setDamage(20);
	setEnergy(50);
	std::cout << "ScavTrap " << getName() << " is with us." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " has left this world." << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << this->getName() << " is now in gate keeper mode." << std::endl;
}