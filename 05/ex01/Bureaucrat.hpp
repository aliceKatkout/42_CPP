/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:44:51 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 15:47:34 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

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

		void				signForm(Form &f);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char	*what () const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char	*what () const throw();
		};


	private :
		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat &b);

#endif