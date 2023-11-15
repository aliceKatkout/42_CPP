/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:09 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/15 13:21:27 by avedrenn         ###   ########.fr       */
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


double Btc::getRate(std::string date) {
	std::map<std::string, double>::iterator it;
	std::string	last_date;

	it = _data_map.find(date);
	if (it != _data_map.end())
		return (it->second);
	else
	{
		it = _data_map.begin();
		last_date = it->first;
		while (it != _data_map.end())
		{
			if (it->first > last_date && it->first < date)
				last_date = it->first;
			it++;
		}
		it = _data_map.find(last_date);
		if (it != _data_map.end())
			return (it->second);
		else
			return (-1);
	}
}

void	Btc::getRateList(std::ifstream &in) {
	std::string	line;
	double		rate;
	size_t pos = 0;
	double nb = 0;

	std::getline(in, line);
	while (std::getline(in, line) && !line.empty())
	{
		if (!parseInput(line))
			continue ;
		pos = line.find('|');
		nb = std::strtod(line.substr(pos + 1, line.length()).c_str(), NULL);
		if ((rate = getRate(line.substr(0, pos))) != -1)
			std::cout << line.substr(0, pos) << "=> "
			<< nb << " = " << rate * nb << std::endl;
		else
			std::cout << "No data" << std::endl;
	}
}

bool	Btc::parseInput(std::string line) {
	int error = 0;
	size_t pos = 0;

	if (!((pos = line.find('|')) != std::string::npos)) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return (false);
	}
	else if (!check_date(line.substr(0, pos - 1))) {
		std::cerr <<  "Error: invalid date => " << line.substr(0, pos) << std::endl;
		return (false);
	}
	else if ((error = check_rate(line.substr(pos + 1, line.length()))) != 0)
	{
		switch (error)
		{
			case 1:
				std::cerr <<  "Error: invalid rate => " << "Not a number." << std::endl;
				return (false);
			case 2:
				std::cerr <<  "Error: invalid rate => " << "Number too big." << std::endl;
				return (false);
			case 3:
				std::cerr <<  "Error: invalid rate => " << "Number too low." << std::endl;
				return (false);
			default:
				return (false);
		}
	}
	return (true);
};

bool Btc::check_date(std::string date) {
	int	year;
	int	month;
	int	day;

	if (date.length() != 10)
		return (false);
	if (date[4] != '-' || date[7] != '-')
		return (false);
	for (size_t i = 0; i < date.size(); i++)
	{
		if (i == 4 || i == 7)
			continue ;
		if (date[i] < '0' || date[i] > '9')
			return (false);
	}
	year = atoi(date.substr(0, 4).c_str());
	month = atoi(date.substr(5, 2).c_str());
	day = atoi(date.substr(8, 2).c_str());
	if (month < 1 || month > 12)
		return (false);
	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			if (day < 1 || day > 29)
				return (false);
		}
		else
		{
			if (day < 1 || day > 28)
				return (false);
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day < 1 || day > 30)
			return (false);
	}
	else
	{
		if (day < 1 || day > 31)
			return (false);
	}
	return (true);
}

int Btc::check_rate(std::string line) {
	if (line.find_first_not_of("0123456789."))
		return (1);
	if (line.find_first_of(".") != line.find_last_of("."))
		return (1);
	if (line.find_first_of(".") == 0 || line.find_last_of(".") == line.length() - 1)
		return (1);
	if (line.find_first_of("0123456789") == std::string::npos)
		return (1);
	if (line.length() > 10 || std::strtod(line.c_str(), NULL) > 1000)
		return (2);
	if (std::strtod(line.c_str(), NULL) < 0 )
		return (3);
	return (0);
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
