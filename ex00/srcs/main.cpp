/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:54:43 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/13 14:24:17 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	vec.push_back(42);
	vec.push_back(21);
	vec.push_back(36);
	vec.push_back(68);
	vec.push_back(45);
	vec.push_back(94);
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Starting a int vector with these values	: "WHITE;
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Trying to find value 36 in the vector	: "WHITE << RESET;
	try
	{
		easyfind(vec, 36);
	}
	catch (std::exception &e)
	{
		std::cout << RED"Value not found"RESET << std::endl << std::endl;
	}
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Trying to find value 156 in the vector	: "WHITE << RESET;
	try
	{
		easyfind(vec, 156);
	}
	catch (std::exception &e)
	{
		std::cout << RED"Exception : Value not found"RESET << std::endl << std::endl;
	}
	std::cout << BLUE"=============================================" << RESET << std::endl;
	return 0;
}
