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
	_brain = new Brain();
	std::cout << "🐶 A Dog is born." << std::endl;
};

Dog::Dog(const Dog &other) {
	_type = other._type;
	_brain = new Brain(*other.getBrain());
	std::cout << "🐶 A Dog is born, cloned." << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "🐶 A Dog is dead." << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	_type = other._type;
	*(_brain) = *(other._brain);
	return (*this);
};

void	Dog::makeSound() const {
	std::cout << _type << " : Wouf" << std::endl;
}

Brain	*Dog::getBrain() const {
	return (_brain);
}