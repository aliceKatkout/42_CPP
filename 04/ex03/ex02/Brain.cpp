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
	std::cout << "🧠 A brain has been formed." << std::endl;
};

Brain::Brain(const Brain &other) {
	(*this) = other;
	std::cout << "🧠 A brain has been formed., cloned." << std::endl;
}

Brain::~Brain() {
	std::cout << "🧠 A brain has been disintegrated." << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	return (*this);
}

void			Brain::setIdea(int i, std::string new_idea) {
	if (i >= 0  && i <= 99)
		_ideas[i] = new_idea;
}

const std::string		&Brain::getIdea(int i) const {
	if (i >= 0 && i <= 99)
		return _ideas[i];
	else
		return _ideas[0];
}