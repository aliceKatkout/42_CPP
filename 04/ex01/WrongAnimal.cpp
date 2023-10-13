/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:47:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 16:57:09 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Undefined beast") {
	std::cout << "A WrongAnimal is born." << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal &other) {
	(*this) = other;
	std::cout << "A WrongAnimal is born, cloned." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "A WrongAnimal is dead." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) {
	_type = other._type;
	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << _type << " : ..." << std::endl;
}
