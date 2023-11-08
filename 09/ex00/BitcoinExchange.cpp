/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:09 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/08 15:12:11 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(std::string &database) {
	makeMap(database);
/* 	try {


		_map.insert(std::make_pair(3, "earth"));
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	} */

}
Btc::Btc(Btc const & other) {
	(void) other;
};
Btc::~Btc() {};

Btc const &Btc::operator=(Btc const & other) {
	(void) other;
	return (*this);
};

void	Btc::parseInput() {

};

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
			_map.insert(std::make_pair( line.substr(0, pos), std::strtod(&line[pos + 1], NULL)));
	}
	data.close();
}
