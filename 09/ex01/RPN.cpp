/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:32:10 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/15 14:02:55 by avedrenn         ###   ########.fr       */
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

void	RPN::parseInput(std::string line) {
	std::string op;
	size_t pos = 0;
	double nb = 0;

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
			_stack.push(nb);
		}
		line.erase(0, pos + 1);
	}
	doPrint();
}

void	RPN::doOperation(std::string op) {
	double nb1;
	double nb2;

	if (_stack.size() < 2)
	{
		std::cout << "Error." << std::endl;
		return ;
	}
	nb1 = _stack.top();
	_stack.pop();
	nb2 = _stack.top();
	_stack.pop();
	if (op == "+")
		_result = nb2 + nb1;
	else if (op == "-")
		_result = nb2 - nb1;
	else if (op == "*")
		_result = nb2 * nb1;
	else if (op == "/")
		_result = nb2 / nb1;
	else if (op == "%")
		_result = std::fmod(nb2, nb1);
	_stack.push(_result);
}

void	RPN::doPrint() {

	std::cout <<"Result : " << _result << std::endl;

}