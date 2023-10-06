/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:09:07 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/06 18:10:11 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream in;

	in.open(argv[1], std::ifstream::in);
	if (in.fail())
	{
		std::cout << "Error while opening "<< filename << "." << std::endl;
		return (1);
	}

	std::string outfile = filename;
	outfile.append(".replace");
	std::cout << "Name of outfile : "<< outfile << std::endl;
	std::ofstream out(outfile.c_str());

	char c = in.get();
	while (in.good())
	{
		out << c;
		c = in.get();
	}

	in.close();
	out.close();

	std::cout << filename << std::endl << s1 << std::endl << s2 << std::endl;
	return 0;
}

//check for ee to e replacement