/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:56:01 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 17:34:23 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Anonymous"), _idx_max(0) {};
Character::Character(std::string name) : _name(name), _idx_max(0) {};
Character::Character(const Character &other) {
	_name = other._name;
	_idx_max = 0;
	//inventory;
}
//Character::~Character();

Character	&Character::operator=(const Character &other) {
	_name = other._name;
	_idx_max = other._idx_max;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = other._inventory[i]->clone();
	}
	//inventory
	return (*this);
}

std::string const 	&Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	_inventory[_idx_max++] = m;
}

void	Character::unequip(int idx) {
	_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target) {
	std::cout << _name << " use " << _inventory[idx]->getType() << " on " << target.getName() << std::endl;
}
