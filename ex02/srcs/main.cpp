/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:13 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/13 18:57:41 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << BLUE"======================================="RESET << std::endl;
	{
		std::vector<int> vec;
		vec.push_back(5);
		vec.push_back(17);
		std::cout << *std::max_element(vec.begin(), vec.end()) << std::endl;
		vec.pop_back();
		std::cout << vec.size() << std::endl;
		vec.push_back(3);
		vec.push_back(5);
		vec.push_back(737);
		vec.push_back(0);
		std::vector<int>::iterator it = vec.begin();
		std::vector<int>::iterator ite = vec.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		return 0;
	}
}
