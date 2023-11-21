/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:59 by avedrenn          #+#    #+#             */
/*   Updated: 2023/11/21 16:33:38 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	fj_sort_vector(std::vector<unsigned int> &arr);
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
		if (str.find_first_not_of("0123456789") != std::string::npos)
			throw PmergeMe::Error();
		_vec.push_back(std::atoi(lines[i]));
		_deq.push_back(std::atoi(lines[i]));
	}

}

void	PmergeMe::merge_insert_sort() {

	printArr(_vec);
	std::cout << "vector sort" << std::endl;
	std::cout << "size : " << _vec.size() << std::endl;
	fj_sort_vector(_vec);
	//fj_sort(_deq);
}

template <typename T>
void	printArr(T &arr) {
	if (arr.empty())
		return ;
	for (typename T::iterator it = arr.begin(); it != arr.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


bool compare_pairs(const std::pair<unsigned int, unsigned int>&i, const std::pair<unsigned int, unsigned int>&j)
{
	return i.second < j.second;
}


template<typename T>
void recursive_sort_pairs(T &arr, T &sorted_pairs) {
	typename T::iterator it_min;
	while (arr.size() > 0){
		if (arr.size() == 1) {
			sorted_pairs.push_back(arr[0]);
			arr.erase(arr.begin());
			return ;
		}
		it_min = std::min_element(arr.begin(), arr.end(), compare_pairs);
		sorted_pairs.push_back(*it_min);
		arr.erase(it_min);
		recursive_sort_pairs(arr, sorted_pairs);
	}
}

template<typename T>
int binarySearch(T &main, unsigned int item, unsigned int low, unsigned int high)
{
	if (high <= low)
		return (item > main[low]) ? (low + 1) : low;
	unsigned int mid = (low + high) / 2;
	if (item == main[mid])
		return mid + 1;
	if (item > main[mid])
		return binarySearch(main, item, mid + 1, high);
	return binarySearch(main, item, low, mid - 1);
}

template<typename T>
void binary_insert(T &main, T &pend_mins) {
	unsigned int loc;
	for (typename T::iterator it = pend_mins.begin(); it != pend_mins.end(); it++ ) {
		loc = binarySearch(main, *it, 0, main.size() - 1);
		main.insert(main.begin() + loc, *it);
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

	std::vector<std::pair <unsigned int,unsigned int>>	sorted_pairs;
	recursive_sort_pairs(pairs, sorted_pairs);

	std::vector<unsigned int> pend_mins;
	std::vector<unsigned int> main;

	// Push first min and all the max in the main chain
	main.push_back(sorted_pairs[0].first);
	std::vector<std::pair <unsigned int,unsigned int>>::iterator pit = sorted_pairs.begin();
	while (pit != sorted_pairs.end()) {
		main.push_back(pit->second);
		pit++;
	}
	sorted_pairs.erase(sorted_pairs.begin());

	// Push all the mins in the pend chain
	pit = sorted_pairs.begin();
	while (pit != sorted_pairs.end()) {
		pend_mins.push_back(pit->first);
		pit++;
	}
	if (isOdd)
		pend_mins.push_back(straggler);

	// Insertion sort the pend chain
	binary_insert(main, pend_mins);
	std::cout << "size : " << main.size() << std::endl;
	printArr(main);
}
