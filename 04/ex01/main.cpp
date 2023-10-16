/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:03:16 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/16 11:04:29 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal	*animals[20];

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

	return 0;
}