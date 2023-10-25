/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:20 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 11:25:47 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PPx", 25, 5), _target("nowhere") {};

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PPx", 25, 5), _target(target) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
	AForm(other), _target(other._target) {};

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	_target = other._target;
	return (*this);
}

void	PresidentialPardonForm::execConcrete() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}