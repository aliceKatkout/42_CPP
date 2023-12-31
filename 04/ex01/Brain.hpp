/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:48:22 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/13 16:57:13 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain();
		Brain(const Brain &other);
		virtual ~Brain();

		Brain	&operator=(const Brain &other);

		void			setIdea(int i, std::string new_idea);
		const std::string		&getIdea(int i) const;

	protected :
		std::string		_ideas[100];
};

#endif