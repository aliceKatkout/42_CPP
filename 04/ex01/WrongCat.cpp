/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:47:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 15:58:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : Animal() {
	_type = "WrongCat";
	std::cout << "A WrongCat is born." << std::endl;
};

WrongCat::WrongCat(WrongCat &other) {
	(*this) = other;
	std::cout << "A WrongCat is born, cloned." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "A WrongCat is dead." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other) {
	_type = other._type;
	return (*this);
};
