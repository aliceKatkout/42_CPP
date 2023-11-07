/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:54 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/07 15:29:17 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

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
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl << "Same with list: " << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Top : " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "Size : " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(10);
	mlist.push_back(11);
	mlist.push_back(12);
	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();
	++lit;
	--lit;
	std::cout << "First value : " << *lit << std::endl;
	std::cout << "Last value : " << *--lite << "\nSize : " << mlist.size() << std::endl;
	lite++;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> l(mlist);

}