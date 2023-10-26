/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:00:21 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 15:48:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :
		Form();
		Form(std::string name, int s_grade, int e_grade);
		Form (const Form &other);
		~Form ();

		Form	&operator=(const Form &other);

		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				isSigned() const;

		void				setSigned(bool sign);

		int					beSigned(Bureaucrat &b);

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
		const int			_sign_grade;
		const int			_exec_grade;
		bool				_signed;

};

std::ostream	&operator<<(std::ostream &os, Form &f);

#endif