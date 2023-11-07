/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:54 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:08:15 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(10);
	mstack.push(11);
	mstack.push(12);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "First value : " << *it << std::endl;
	std::cout << "Last value : " << *--ite << "\nSize : " << mstack.size() << std::endl;
	ite++;
	while (it != ite)
	{
		std::cout << *it << " / " << *ite << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}