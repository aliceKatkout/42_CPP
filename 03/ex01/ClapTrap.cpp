/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:11 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/11 12:23:33 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Anonymous"), _hit(10), _energy(10), _damage(0) {
	std::cout << _name << " join the fight !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {
	std::cout << _name << " join the fight !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj) : _name(obj._name), _hit(obj._hit), _energy(obj._energy), _damage(obj._damage) {
	std::cout << _name << " , a copy of " << obj._name << "join the fight !" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " has left this world." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << _name << " attacks " << target << ", causing " << _damage << " points of damage !" << std::endl;
	_energy --;
};


void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " takes " << amount << " points of damage !" << std::endl;
	_hit -= amount;
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " repairs itself : " << amount << " hit points back !" << std::endl;
	_hit += amount;
	_energy --;
};
