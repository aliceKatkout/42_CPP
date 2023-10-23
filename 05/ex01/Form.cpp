/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:00:18 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/23 16:13:14 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int s_grade, int e_grade) : _name(name), _sign_grade(s_grade), _exec_grade(e_grade) {

	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade) {
}

Form::~Form() {}; // reprendre ici

Form &Form::operator=(const Form &other) {
	_grade = other.getGrade();
	return (*this);
}

const std::string	Form::getName() const {
	return (_name);
}

int		Form::getGrade() const {
	return (_grade);
}

void	Form::incrementGrade() {
	_grade --;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
	throw GradeTooLowException();
}

void	Form::decrementGrade() {
	_grade ++;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &os, Form &b) {
	return (os << b.getName() << " Form grade " << b.getGrade() << std::endl);
}