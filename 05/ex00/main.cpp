/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:44:27 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/23 15:59:10 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
try {
		Bureaucrat bureaucrat("Alice", 1);

		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
		//bureaucrat.decrementGrade();
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception catched : " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception catched : " << e.what() << std::endl;
	}
	return 0;
}