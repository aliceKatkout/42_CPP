/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:48:08 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 16:13:37 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++) {

		Base *base = generate();
		std::cout << "[" << i << "] - " << "Lettre generee: ";
		identify(base); // prend un objet de type Base et affiche l'objet reel qu'est base (A, B ou C) grace au dynamic_cast
		std::cout << " | ";
		identify(*base); // idem mais en passant par une reference
		std::cout << std::endl;
		delete base;
	}

	std::cout << "NULL - " << "Lettre generee: ";
	Base *base = NULL;
	identify(base);
	std::cout << " | ";
	identify(*base); // idem mais en passant par une reference
	std::cout << std::endl;
	return (0);
}
