/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:48:22 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 12:07:21 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();

		Animal	&operator=(const Animal &other);

		std::string		getType() const;
		virtual void	makeSound() const;

	protected :
		std::string		_type;
};

#endif