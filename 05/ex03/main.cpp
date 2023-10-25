/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:44:27 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 12:35:32 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

void	testForm(Bureaucrat& bureaucrat, AForm& form) {
	std::cout << form;
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
}

int	main() {
	Bureaucrat	burro("Burro", 1);
	Bureaucrat	burretto("Burretto", 42);
	std::cout << burro << burretto;
	Intern		intern1;

	try {
		{
			sectionTitle("shrubbery creation via intern");
			AForm *form = intern1.makeForm("shrubbery creation", "Home");
			testForm(burro, *form);
			delete form;
		}
		{
			sectionTitle("robotomy request via intern");
			AForm *form = intern1.makeForm("robotomy request", "Bender");
			testForm(burro, *form);
			delete form;
		}
		{
			sectionTitle("presidential pardon via intern");
			AForm *form = intern1.makeForm("presidential pardon", "Ali");
			testForm(burro, *form);

			form->setSigned(false);

			sectionTitle("execute unsigned form");
			std::cout << *form;
			burro.executeForm(*form);


			sectionTitle("too low to execute");
			burro.signForm(*form);
			burretto.executeForm(*form);

			delete form;
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}