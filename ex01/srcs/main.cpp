/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:11:36 by abakirca          #+#    #+#             */
/*   Updated: 2025/10/21 13:08:57 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << YELLOW"Starting a Span test with these values	: "WHITE;
	std::cout << "6, 3, 17, 9, 11" << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Shortest span	: "WHITE << sp.shortestSpan() << RESET << std::endl << std::endl;
	std::cout << CYAN"Longest span	: "WHITE << sp.longestSpan() << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << YELLOW"Starting a Span test with 20.000 values	: "RESET << std::endl << std::endl;
	Span sp2 = Span(20000);
	try
	{
		sp2.RandomFill(sp2, 20000);
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception : " << e.what() << std::endl << std::endl;
	}
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Shortest span	: "WHITE << sp2.shortestSpan() << RESET << std::endl << std::endl;
	std::cout << CYAN"Longest span	: "WHITE << sp2.longestSpan() << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << YELLOW"Exception tests : "RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Empty Vector"WHITE << RESET << std::endl << std::endl;
	Span sp3 = Span();
	try
	{
		std::cout << CYAN"Shortest span	: "WHITE << sp3.shortestSpan() << RESET << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception : " << e.what() << std::endl << std::endl;
	}
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Vector with 1 value"WHITE << RESET << std::endl << std::endl;
	Span sp4 = Span(1);
	sp4.addNumber(42);
	try
	{
		std::cout << CYAN"Shortest span	: "WHITE << sp4.shortestSpan() << RESET << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception : " << e.what() << std::endl << std::endl;
	}
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Span with full vector"WHITE << RESET << std::endl << std::endl;
	Span sp5 = Span(2);
	sp5.addNumber(42);
	sp5.addNumber(21);
	try
	{
		sp5.addNumber(36);
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception : " << e.what() << std::endl << std::endl;
	}
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << YELLOW"Starting a Vector test with subject values : "RESET << std::endl << std::endl;
	Span sp6 = Span(10);
	int arr[] = {6, 3, 17, 9, 11};
	sp6.addNumber(arr, 5);
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Shortest span	: "WHITE << sp6.shortestSpan() << RESET << std::endl << std::endl;
	std::cout << CYAN"Longest span	: "WHITE << sp6.longestSpan() << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << YELLOW"Starting a Vector test with iterator values : "RESET << std::endl << std::endl;
	Span sp7 = Span(10);
	std::vector<int> vec;
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(11);
	sp7.addNumber(vec.begin(), vec.end());
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Shortest span	: "WHITE << sp7.shortestSpan() << RESET << std::endl << std::endl;
	std::cout << CYAN"Longest span	: "WHITE << sp7.longestSpan() << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl;
	return (0);
}
