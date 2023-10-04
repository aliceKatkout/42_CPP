/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:13:41 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/04 16:25:08 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie
{
	public :
		Zombie();
		~Zombie();

		void	announce(void) const;
		void	set_name(std::string name);

	private :
		std::string		_name;

};

Zombie	*zombieHorde(int N, std::string name);

#endif