/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:59 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/20 13:27:56 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};
PmergeMe::PmergeMe(PmergeMe const & other) { *this = other; };
PmergeMe::~PmergeMe() {};

PmergeMe const &PmergeMe::operator=(PmergeMe const & other) {
	if (this != &other)
		*this = other;
	return (*this);
}

void	PmergeMe::parseInput(char **lines) {
	std::string str;
	if (!lines[1])
		throw PmergeMe::Error();
	for (int i = 1; lines[i]; i++) {
		str = lines[i];
		if (str.find_first_not_of("0123456789 ") != std::string::npos)
			throw PmergeMe::Error();
		_vec.push_back(std::atoi(lines[i]));
		_deq.push_back(std::atoi(lines[i]));
	}
}

void	PmergeMe::merge() {
	fj_sort(_vec);
	fj_sort(_deq);
}

void	PmergeMe::printDeq() {
	if (_deq.empty())
		return ;
	for (std::deque<unsigned int>::iterator it = _deq.begin(); it != _deq.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printVec() {
	if (_vec.empty())
		return ;
	for (std::vector<unsigned int>::iterator it = _vec.begin(); it != _vec.end(); it++ ) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}



template<typename T>
void insert_sort_pairs_vector(vector<std::pairs> &arr) {
	unsigned int i = 1;
	unsigned int j;
	unsigned int tmp;
	while (i < arr.size())
	{
		j = 1;
		while (j > 0 && arr[j-1] > arr[j])
		{
			tmp = arr[j].second;
			arr[j] = arr[j-1];
			arr[j-1] = tmp;
		}
		i ++;
	}
}

void	fj_sort_vector(std::vector<unsigned int> &arr) {

	// Determine if it's odd numbered... if so, take off a straggler
	if (arr.size() <= 1)
		return ;
	bool isOdd = (arr.size() % 2 != 0) ? true : false;
	unsigned int straggler = 0;

	if (isOdd) {
		straggler = arr[arr.size() - 1];
		arr.pop_back();
	}

    // Then Split Array into Pairs
    std::vector<std::pair <unsigned int,unsigned int>>	pairs;
	std::vector<unsigned int>::iterator	it = arr.begin();

	while (it != arr.end()) {
		if (*it < *(it + 1))
			pairs.push_back(std::make_pair(*it, *(it + 1)));
		else
			pairs.push_back(std::make_pair(*(it + 1), *it));
		it += 2;
	}

	insert_sort_pairs_vector(pairs);
	std::vector<unsigned int> pend_mins;
	std::vector<unsigned int> main;

	// Push first min and all the max in the main chain
	main = pairs[0].first;
	it = pairs.begin();
	while (it != pairs.end()) {
		main.push_back(it->second);
		it++;
	}
	pairs.pop_front();

	// Push all the mins in the pend chain
	it = pairs.begin();
	while (it != pairs.end()) {
		pend_mins.push_back(it->first);
		it++;
	}

	


	//Insert sort





	// Create main and pend sequences and merge insertion sort
	//S = create_s(sorted_split_array, straggler, True);
}

    // Sort each pair of elements
    //sorted_split_array = sort_each_pair(split_array)

    // Recursively sort the pairs by their largest element
    //sort_by_larger_value(sorted_split_array)

    // Create main and pend sequences and merge insertion sort
    //S = create_s(sorted_split_array, straggler, True)

	//ford johnson algorithm
	/* if (arr.size() <= 1)
		return ;
	typename T::iterator mid = arr.begin() + arr.size() / 2;
	T left(arr.begin(), mid);
	T right(mid, arr.end());

	typename T::iterator it_right = right.begin();
	for (typename T::iterator it_left = left.begin(); it_left != left.end(); it_left++)
	{
		if (*it_left > *it_right)
		{

		}

	} */

	/* if (arr.size() <= 1)
		return ;
	typename T::iterator mid = arr.begin() + arr.size() / 2;
	T left(arr.begin(), mid);
	T right(mid, arr.end());
	std::cout << "left :" << std::endl;
	for (typename T::iterator it = left.begin(); it != left.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "right :" << std::endl;
	for (typename T::iterator it2 = right.begin(); it2 != right.end(); it2++) {
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;
	fj_sort(left);
	fj_sort(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), arr.begin()); */
