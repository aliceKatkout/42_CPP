/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:00:21 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/23 16:11:54 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	public :
		Form(std::string name, int s_grade, int e_grade);
		Form (const Form &other);
		~Form ();

		Form	&operator=(const Form &other);

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
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;

};

std::ostream	&operator<<(std::ostream &os, Form &f);

#endif