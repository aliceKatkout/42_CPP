/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:32 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/20 14:13:28 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _idx(0) {
	for (int i = 0; i < 4; i++)
		_stock[i] = 0;
};
MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4; i++)
	{
		if (other._stock[i])
			_stock[i] = other._stock[i]->clone();
	}
};
MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_stock[i] != 0)
			delete _stock[i];
	}
};

MateriaSource	&MateriaSource::operator=(const MateriaSource &other) {
	_idx = other._idx;
	for (int i = 0; i < 4; i++)
	{
		if (_stock[i])
			delete _stock[i];
		_stock[i] = other._stock[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	int i = 0;
	if (!m)
		return ;
	if (_idx < 4) {
		_stock[_idx++] = m;
		std::cout << "Materia " << m->getType() << " learned at index " << _idx - 1 << std::endl;
	} else {
		while ( _stock[i] != 0 && i < 4)
			i ++;
		if (i < 4) {
			_stock[i] = m;
			std::cout << "Materia " << m->getType() << " learned at index " << i << std::endl;
		} else {
			std::cout <<  "MateriaSource is full ... "<< std::endl;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = _idx; i >= 0 ; i --) {
		if (_stock[i] && _stock[i]->getType() == type) {
			return _stock[i]->clone();
		}
	}
	return (0);
}