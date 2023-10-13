/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:33:42 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 13:39:29 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	setHit(100);
	setDamage(30);
	setEnergy(100);
	std::cout << YELLOW << "FragTrap " << _name << " is with us." << RESET << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
	// setHit(100);
	_hit = 100;
	setDamage(30);
	setEnergy(100);
	std::cout << YELLOW << "FragTrap " << getName() << " is with us." << RESET << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << YELLOW << "FragTrap " << _name << " has left this world." << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap &other) {
	other = (*this);
	std::cout  << CYAN << _name << " , a copy of " << other._name << "join the fight !" << RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap	&other) {
	_name = other._name;
	_hit = other._hit;
	_damage = other._damage;
	_energy = other._energy;
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << _name << " : High five ? 🙏" << std::endl;
}