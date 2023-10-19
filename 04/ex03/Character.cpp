/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:56:01 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/19 11:59:42 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Anonymous"), _idx_max(0) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
};
Character::Character(std::string name) : _name(name), _idx_max(0) {};
Character::Character(const Character &other) {
	_name = other._name;
	_idx_max = 0;
	for (int i = 0; i < 4; i++)
		_inventory[i] = other._inventory[i]->clone();
}
Character::~Character() {};

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
	int i = 0;
	if (_idx_max < 4) {
		_inventory[_idx_max++] = m;
		std::cout << m->getType() << " equiped at index " << _idx_max - 1 << " by " << _name << std::endl;
	} else {
		while ( _inventory[i] != 0)
			i ++;
		if (i < 4) {
			_inventory[i] = m;
			std::cout << m->getType() << " equiped at index " << i << " by " << _name << std::endl;
		} else {
			std::cout <<  "Inventory of "<< _name << " is full ... "<< std::endl;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 4)
		std::cout << "unequip : Wrong index \n";
	else
		_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 4)
		std::cout << "unequip : Wrong index \n";
	else if (_inventory[idx])
	{
		_inventory[idx]->use(target);
		_inventory[idx] = 0;
	}
	else
		std::cout << "use : There is no materia at this index ... \n";
}
