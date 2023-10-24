/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:56:56 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/24 14:56:46 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Anon"), _grade(75) {};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {
}

Bureaucrat::~Bureaucrat() {};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	_grade = other.getGrade();
	return (*this);
}

const std::string	Bureaucrat::getName() const {
	return (_name);
}

int		Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::incrementGrade() {
	_grade --;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
	throw GradeTooLowException();
}

void	Bureaucrat::decrementGrade() {
	_grade ++;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat &b) {
	return (os << b.getName() << " bureaucrat grade " << b.getGrade() << std::endl);
}