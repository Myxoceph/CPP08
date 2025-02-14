/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:13 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/14 17:23:48 by abakirca         ###   ########.fr       */
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
		std::deque<int> deq;
		deq.push_back(5);
		deq.push_back(17);
		std::cout << deq.back() << std::endl;
		deq.pop_back();
		std::cout << deq.size() << std::endl;
		deq.push_back(3);
		deq.push_back(5);
		deq.push_back(737);
		deq.push_back(0);
		std::deque<int>::iterator it = deq.begin();
		std::deque<int>::iterator ite = deq.end();
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
