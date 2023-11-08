/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:18 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/08 15:38:18 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}

	std::ifstream in;
	in.open(argv[1], std::ifstream::in);
	if (in.fail())
	{
		std::cout << "Error while opening "<< argv[1] << "." << std::endl;
		return (1);
	}

	std::string database = "data.csv";
	Btc btc(database);
	btc.parseInput(in);
}