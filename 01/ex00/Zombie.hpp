/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:24:29 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/12 13:44:01 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie
{
	public :
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;

	private :
		std::string		_name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
