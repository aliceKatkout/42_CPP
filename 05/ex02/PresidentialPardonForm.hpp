/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:52:46 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/24 18:22:08 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm (const PresidentialPardonForm &other);
		~PresidentialPardonForm ();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

	private :
		std::string		_target;
		void			execConcrete() const;
};

#endif