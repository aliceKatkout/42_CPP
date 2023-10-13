/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:11 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 12:07:43 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

/* CONSTRUCTORS & DESTRUCTORS */

ClapTrap::ClapTrap() : _name("Anonymous"), _hit(10), _energy(10), _damage(0) {
	std::cout << GREEN << _name << " join the fight !" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {
	std::cout  << GREEN << _name << " join the fight !" << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj) : _name(obj._name), _hit(obj._hit), _energy(obj._energy), _damage(obj._damage) {
	std::cout  << GREEN << _name << " , a copy of " << obj._name << "join the fight !" << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << GREEN << _name << " has left this world." << RESET << std::endl;
}

/* GETTERS */

std::string	ClapTrap::getName() const {
	return (_name);
}

int	ClapTrap::getEnergy() const {
	return (_energy);
}

int	ClapTrap::getHit() const {
	return (_hit);
}

int	ClapTrap::getDamage() const {
	return (_damage);
}

/* SETTERS */
void	ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setEnergy(unsigned int amount) {
	_energy = amount;
}

void	ClapTrap::setHit(unsigned int amount) {
	_hit = amount;
}

void	ClapTrap::setDamage(unsigned int amount) {
	_damage = amount;
}

/* ACTIONS FUNCTIONS */

void	ClapTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		std::cout << _name << " attacks " << target << ", causing " << _damage << " points of damage !" << std::endl;
		_energy --;
	} else {
		std::cout << _name << "tries to attack " << target << "but has no energy left ..." << std::endl;
	}

};

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " takes " << amount << " points of damage !" << std::endl;
	_hit -= amount;
	std::cout << _name << " is left with " << _hit << " hits points !" << std::endl;
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0)
	{
		std::cout << _name << " repairs itself : " << amount << " hit points back !" << std::endl;
		_hit += amount;
		_energy --;
	} else {
		std::cout << _name << "tries to repairs itself but has no energy left ..." << std::endl;
	}
};
