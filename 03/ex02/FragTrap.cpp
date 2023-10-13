/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:33:42 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 12:21:26 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	// setHit(100);
	_hit = 100;
	setDamage(30);
	setEnergy(100);
	std::cout << YELLOW << "FragTrap " << getName() << " is with us." << RESET << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
	// setHit(100);
	_hit = 100;
	setDamage(30);
	setEnergy(100);
	std::cout << YELLOW << "FragTrap " << getName() << " is with us." << RESET << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << YELLOW << "FragTrap " << getName() << " has left this world." << RESET << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << getName() << " : High five ? 🙏" << std::endl;
}