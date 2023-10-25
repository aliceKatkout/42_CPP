/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:01:13 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 12:23:31 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern &other);
		~Intern();

		const Intern	&operator=(const Intern &other);

		AForm			*makeForm(std::string formName, std::string target);

		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif