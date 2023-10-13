/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:47:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 17:06:14 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Undefined beast") {
	std::cout << "An animal is born." << std::endl;
};

Animal::Animal(Animal &other) {
	(*this) = other;
	std::cout << "An animal is born, cloned." << std::endl;
}

Animal::~Animal() {
	std::cout << "An animal is dead." << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
	_type = other._type;
	return (*this);
}

std::string	Animal::getType() const {
	return (_type);
}

void	Animal::makeSound() const {
	std::cout << _type 	<< " : ..." << std::endl;
}
