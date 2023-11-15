/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:32:10 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/15 15:10:06 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _result(0) {};
RPN::RPN(RPN const & other) {
	(void) other;
};

RPN::~RPN() {};

RPN const &RPN::operator=(RPN const & other) {
	(void) other;
	return (*this);
};

bool	RPN::parseInput(std::string line) {
	try
	{
		if (line.find_first_not_of("0123456789 +-*/%") != std::string::npos)
			throw Error();
		if (line.find_first_of("+-*/%") == 0 || line.find_last_of("0123456789") == line.length() - 1)
			throw Error();
		if (line.find_first_of("0123456789") == std::string::npos)
			throw Error();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (false);
	}
	return (true);
}

void	RPN::execute(std::string line) {
	std::string op;
	size_t pos = 0;
	double nb = 0;

	try
	{
		while ((pos = line.find(" ")) != std::string::npos || line.length() > 0)
		{
			if (pos == std::string::npos)
				pos = line.length();
			op = line.substr(0, pos);
			if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%")
				doOperation(op);
			else
			{
				nb = std::strtod(op.c_str(), NULL);
				if (nb > 9 || nb < 0)
					throw Error();
				_stack.push(nb);
			}
			line.erase(0, pos + 1);
		}
		if (_stack.size() != 1)
			throw Error();
		std::cout << _result << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	RPN::doOperation(std::string op) {
	double nb1;
	double nb2;

	if (_stack.size() < 2)
	{
		throw Error();
		return ;
	}
	nb1 = _stack.top();
	_stack.pop();
	nb2 = _stack.top();
	_stack.pop();
	switch (op.c_str()[0]) {
		case '+':
			_result = nb2 + nb1;
			break ;
		case '-':
			_result = nb2 - nb1;
			break ;
		case '*':
			_result = nb2 * nb1;
			break ;
		case '/':
			if (nb1 == 0)
				throw Error();
			_result = nb2 / nb1;
			break ;
		case '%':
			if (nb1 == 0)
				throw Error();
			_result = std::fmod(nb2, nb1);
			break ;
	}
	_stack.push(_result);
}