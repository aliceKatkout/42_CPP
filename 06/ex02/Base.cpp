/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:29:36 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 16:11:37 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	switch (rand() % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (new A());
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "Unknown";
}

void	identify(Base &p)
{
	char	c = 0;

	try {
		A test = dynamic_cast<A&>(p);
		c = 'A';
	}
	catch(std::exception &e) { }

	try {
		B test = dynamic_cast<B&>(p);
		c = 'B';
	}
	catch(std::exception &e) { }

	try {
		C test = dynamic_cast<C&>(p);
		c = 'C';
	}
	catch(std::exception &e) { }

	if (c)
		std::cout << "Reference identified as class " << c << std::endl;
	else
		std::cout << "Impossible to identify class of reference" << std::endl;
	return;
}