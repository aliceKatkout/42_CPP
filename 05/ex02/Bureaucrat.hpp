/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:44:51 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 11:17:08 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		void				signForm(AForm &f);
		void				executeForm(AForm const &form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char	*what () const throw() {
					return ("grade is lower than 1");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char	*what () const throw() {
					return ("grade is greater than 150");
				}
		};


	private :
		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat &b);

#endif