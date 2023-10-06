/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:37:44 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/06 15:32:23 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	public :
		Weapon(std::string type);
		~Weapon();

		const std::string		&getType() const;
		void			setType(std::string new_type);

	private :
		std::string	_type;

};

#endif