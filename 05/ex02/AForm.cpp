/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:00:18 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/24 15:44:42 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Anon"), _sign_grade(75),
	_exec_grade(75),_signed(false) {};

AForm::AForm(std::string name, int s_grade, int e_grade) : _name(name), _sign_grade(s_grade),
	_exec_grade(e_grade),_signed(false) {

	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _sign_grade(other._sign_grade),
	_exec_grade(other._exec_grade), _signed(other._signed) {
}

AForm::~AForm() {};
AForm &AForm::operator=(const AForm &other) {
	std::cout << "A AForm can't be equal to another AForm, too many const ..." << std::endl;
	(void) other;
	return (*this);
}

const std::string	AForm::getName() const {
	return (_name);
}

int		AForm::getSignGrade() const {
	return (_sign_grade);
}

int		AForm::getExecGrade() const {
	return (_exec_grade);
}

bool	AForm::isSigned() const {
	return (_signed);
}

void	AForm::setSigned(bool sign) {
	_signed = sign;
}

int	AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= _sign_grade) {
		if (_signed)
			return (1);
		else {
			_signed = true;
			return (2);
		}
	} else {
		throw AForm::GradeTooLowException();
		return (0);
	}
}

std::ostream	&operator<<(std::ostream &os, AForm &f) {
	return (os << "AForm named " << f.getName() << " require a " << f.getSignGrade() <<
	" grade to be signed, a " << f.getExecGrade() << " grade to be executed and is currently " <<
	(f.isSigned() ? "signed." : "not signed.") << std::endl);
}