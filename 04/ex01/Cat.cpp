/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:47:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 15:58:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A Cat is born." << std::endl;
};

Cat::Cat(Cat &other) {
	(*this) = other;
	std::cout << "A Cat is born, cloned." << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "A Cat is dead." << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	_type = other._type;
	return (*this);
};

void	Cat::makeSound() const {
	std::cout << _type << " : Miaou" << std::endl;
}
