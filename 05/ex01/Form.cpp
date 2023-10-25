/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:00:18 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 15:48:26 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Anon"), _sign_grade(75),
	_exec_grade(75),_signed(false) {};

Form::Form(std::string name, int s_grade, int e_grade) : _name(name), _sign_grade(s_grade),
	_exec_grade(e_grade),_signed(false) {

	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _sign_grade(other._sign_grade),
	_exec_grade(other._exec_grade), _signed(other._signed) {
}

Form::~Form() {};

Form &Form::operator=(const Form &other) {
	std::cout << "A form can't be equal to another form, too many const ..." << std::endl;
	(void) other;
	return (*this);
}

const std::string	Form::getName() const {
	return (_name);
}

int		Form::getSignGrade() const {
	return (_sign_grade);
}

int		Form::getExecGrade() const {
	return (_exec_grade);
}

bool	Form::isSigned() const {
	return (_signed);
}

void	Form::setSigned(bool sign) {
	_signed = sign;
}

int	Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= _sign_grade) {
		if (_signed)
			return (1);
		else {
			_signed = true;
			return (2);
		}
	} else {
		throw Form::GradeTooLowException();
		return (0);
	}
}

std::ostream	&operator<<(std::ostream &os, Form &f) {
	return (os << "Form named " << f.getName() << " require a " << f.getSignGrade() <<
	" grade to be signed, a " << f.getExecGrade() << " grade to be executed and is currently " <<
	(f.isSigned() ? "signed." : "not signed.") << std::endl);
}

const char	*Form::GradeTooHighException::what () const throw()  {
	return ("grade is too high");
}

const char	*Form::GradeTooLowException::what () const throw() {
	return ("grade is too low");
}