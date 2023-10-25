/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:20 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 11:26:10 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("RRx", 72, 45), _target("nowhere") {};

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RRx", 72, 45), _target(target) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
	AForm(other), _target(other._target) {};

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	_target = other._target;
	return (*this);
}

void	RobotomyRequestForm::execConcrete() const {
	static int i = 0;
	std::cout << " DRIIILL DRRRIIIIIIIILL" << std::endl;
	if (i % 2)
		std::cout << "Robotomy on " << _target << " has failed ..." << std::endl;
	else
		std::cout << _target << "has been robotomized successfully !" << std::endl;
	i ++;
}