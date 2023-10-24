/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:00:21 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/24 15:44:00 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public :
		AForm();
		AForm(std::string name, int s_grade, int e_grade);
		AForm (const AForm &other);
		virtual ~AForm () = 0;

		AForm	&operator=(const AForm &other);

		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				isSigned() const;

		void				setSigned(bool sign);

		int					beSigned(Bureaucrat &b);
		void				execute(Bureaucrat const &executor) const;
		virtual	void		execConcrete() const = 0;

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

		class UnsignedFormException : public std::exception {
			public:
				virtual const char	*what () const throw() {
					return ("form is unsigned.");
				}
		};

	private :
		const std::string	_name;
		const int			_sign_grade;
		const int			_exec_grade;
		bool				_signed;

};

std::ostream	&operator<<(std::ostream &os, AForm &f);

#endif