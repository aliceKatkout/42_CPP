/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:23:45 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 15:52:20 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public:
		virtual ~Base() {};
};

Base* generate(void);
void identify(Base *p);
void identify(Base &p);

#endif