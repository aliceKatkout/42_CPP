/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:06:01 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/03 15:22:51 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// reinterpret cast permet de convertir un type de data en un autre type de data

int main()
{
	Data ptr;
	ptr.str = "Hello";
	ptr.number = 24;

	Data ptr2;
	ptr2.str = "Bonjour";
	ptr2.number = 42;



	std::cout << "______STRUCTURE DE BASE_____" << std::endl;
	std::cout << "address: " << &ptr << std::endl;
	std::cout << "str: " << ptr.str << std::endl;
	std::cout << "i: " << ptr.number << std::endl;

	std::cout << "address: " << &ptr2 << std::endl;
	std::cout << "str: " << ptr2.str << std::endl;
	std::cout << "i: " << ptr2.number << std::endl;

	std::cout << std::endl;

	Serializer a;

	Data *reserialized_struct = a.deserialize(a.serialize(&ptr));

	std::cout << "______RESERIALIZED STRUCTURE_____" << std::endl;
	std::cout << "address: " << reserialized_struct << std::endl;
	std::cout << "str: " << reserialized_struct->str << std::endl;
	std::cout << "i: " << reserialized_struct->number << std::endl;


	return (0);
}