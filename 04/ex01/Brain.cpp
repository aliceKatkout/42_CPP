/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:47:55 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 17:06:14 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	//to do
	std::cout << "An Brain is born." << std::endl;
};

Brain::Brain(Brain &other) {
	(*this) = other;
	std::cout << "An Brain is born, cloned." << std::endl;
}

Brain::~Brain() {
	std::cout << "An Brain is dead." << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	//to do
	return (*this);
}
