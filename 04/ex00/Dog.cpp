/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:47:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 15:58:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	_type = "Dog";
	std::cout << "A Dog is born." << std::endl;
};

Dog::Dog(Dog &other) {
	(*this) = other;
	std::cout << "A Dog is born, cloned." << std::endl;
}

Dog::~Dog() {
	std::cout << "A Dog is dead." << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	_type = other._type;
	return (*this);
};

void	Dog::makeSound() const {
	std::cout << _type << " : Wouf" << std::endl;
}