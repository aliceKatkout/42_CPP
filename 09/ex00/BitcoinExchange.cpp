/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:09 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/08 16:19:15 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(std::string &database) {
	makeMap(database);

}

Btc::Btc(Btc const & other) {
	(void) other;
};
Btc::~Btc() {};

Btc const &Btc::operator=(Btc const & other) {
	(void) other;
	return (*this);
};

void	Btc::parseInput(std::ifstream &in) {
	std::string	line;
	size_t pos = 0;

	std::getline(in, line);
	while (std::getline(in, line) && !line.empty())
	{
		if (!((pos = line.find('|')) != std::string::npos))
			std::cerr << "Error: bad input => " << line << std::endl;
		else if (!check_date(line.substr(0, pos)))
			std::cerr <<  "Error: invalid date => " << line.substr(0, pos) << std::endl;
		else if (!check_rate(line.substr(pos + 1, line.length())))
			std::cerr <<  "Error: invalid rate => " << line.substr(pos + 1, line.length()) << std::endl;
		else
			std::cout << line.substr(0, pos) << " => " << std::endl;
	}
};

bool Btc::check_date(std::string line) {
	if (line.find('-'))
		return (true);
	return (false);
}

bool Btc::check_rate(std::string line) {
	if (line.find_first_not_of("0123456789."))
		return false;
	return (true);
}

void Btc::makeMap(std::string &database)
{
	std::string line;
	std::ifstream data;
	size_t pos = 0;

	data.open(database.c_str());
	std::getline(data, line);
	while (std::getline(data, line) && !line.empty())
	{
		if ((pos = line.find(',')) != std::string::npos)
			_data_map.insert(std::make_pair( line.substr(0, pos), std::strtod(&line[pos + 1], NULL)));
	}
	data.close();
}
