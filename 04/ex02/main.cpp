/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:03:16 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 12:25:49 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"

/* En programmation orientée objet (POO), une classe abstraite
est une classe si et seulement si elle n'est pas instanciable.
Elle sert de base à d'autres classes dérivées (héritées). */

int main()
{
	const Animal	*animals[20];
	const Dog		*will = new Dog();
	const Dog		*will2;

	will->getBrain()->setIdea(0, "Good dog");
	will->getBrain()->setIdea(1, "Love food");

	will2 = new Dog(*will);
	will->makeSound();
	will2->makeSound();
	delete will;

	std::cout << "Will2 is a " << will2->getType() << std::endl;
	std::cout << will2->getBrain()->getIdea(0) << std::endl;
	std::cout << will2->getBrain()->getIdea(1) << std::endl;
	delete will2;

	for (int i = 0; i < 20; i++)
	{
		if (i <= 9)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	animals[4]->makeSound();
	animals[11]->makeSound();

	for (int i = 0; i < 20; i++)
		delete animals[i];

/*  	const Animal *anomaly;
	anomaly = new Animal(); */
	return 0;
}