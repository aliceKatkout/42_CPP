/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:44:27 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/24 15:47:12 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	bill("Bill", 132);

	Bureaucrat & bob_ref = bob;
	Bureaucrat & bill_ref = bill;

	Form		a("A13", 4, 6);
	Form		b("B97", 146, 135);

	// Create a Form with grades too low
	try
	{
		Form	c("C46", 489, 1435);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Constructor failure: " << e.what() << std::endl; //the grade is too low
	}

	// Create a grade with grades too high
	try
	{
		Form	c("D143", -583, -800);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << "Constructor failure: " << e.what() << std::endl; //the grade is too high
	}

	// Sign forms
	std::cout << std::endl;
	std::cout << "SIGN FORMS:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// Sign OK
	std::cout << "SIGN OK:" << std::endl;
	bob_ref.signForm(a);
	std::cout << a << std::endl;
	a.setSigned(false);

	// Sign KO
	std::cout << "SIGN KO:" << std::endl;
	bill_ref.signForm(a);
	std::cout << a << std::endl;

	// Sign OK
	std::cout << "SIGN OK:" << std::endl;
	bob.signForm(b);
	std::cout << b << std::endl;

	// Sign OK BUT ALREADY SIGNED
	std::cout << "SIGN OK:" << std::endl;
	bill.signForm(b);
	std::cout << b << std::endl;

	return (0);
}