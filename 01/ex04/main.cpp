/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:09:07 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/12 14:02:07 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	ft_replace(std::string &str, std::string s1, std::string s2)
{
	std::size_t	pos;
	std::size_t	old_len;
	std::size_t	new_len;

	pos = 0;
	old_len = s1.length();
	new_len = s2.length();
	if (!old_len || !new_len)
		return ;
	pos = str.find(s1, pos);
	while (pos != std::string::npos)
	{
		str.erase(pos, old_len);
		str.insert(pos, s2);
		pos = str.find(s1, pos + new_len);
	}
}

int	main(int argc, char** argv)
{
	if (argc != 4)
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

	std::string outfile = argv[1];
	outfile.append(".replace");
	std::ofstream out(outfile.c_str());

	std::string str;
	std::getline(in, str);
	while (in.good())
	{
		ft_replace(str, argv[2], argv[3]);
		out << str << std::endl;
		std::getline(in, str);
	}

	in.close();
	out.close();
	return (0);
}