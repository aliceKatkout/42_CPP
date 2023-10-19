/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:32 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/19 12:14:39 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _idx(0) {
	for (int i = 0; i < 4; i++)
		_stock[i] = 0;
};
MateriaSource::MateriaSource(const MateriaSource &other) {
	(*this) = other;
};
MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_stock[i])
			delete _stock[i];
	}
};

MateriaSource	&MateriaSource::operator=(const MateriaSource &other) {
	_idx = other._idx;
	for (int i = 0; i < 4; i++)
		_stock[i] = other._stock[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	_stock[_idx++] = m;
	std::cout << "Materia " << m->getType() << " learned at index " << _idx - 1 << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	AMateria	* res = 0;
	for (int i = _idx; i >= 0 ; i --) {
		if (_stock[i])
			std::cout << "i = " << i << ", type = " << _stock[i]->getType() << std::endl;
		if (_stock[i] && _stock[i]->getType() == type) {
			res = _stock[i]->clone();
		}
	}
	return (res);
}