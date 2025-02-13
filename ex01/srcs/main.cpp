/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:11:36 by abakirca          #+#    #+#             */
/*   Updated: 2025/02/13 17:46:45 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << YELLOW"Starting a Span test with these values	: "WHITE;
	std::cout << "5, 3, 17, 9, 11" << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl << std::endl;
	std::cout << CYAN"Shortest span	: "WHITE << sp.shortestSpan() << RESET << std::endl << std::endl;
	std::cout << CYAN"Longest span	: "WHITE << sp.longestSpan() << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl;
	std::cout << YELLOW"Starting a Span test with 20.000 values	: "RESET << std::endl;
	Span sp2 = Span(20000);
	sp2.RandomFill(sp2, 20000);
	std::cout << BLUE"=============================================" << RESET << std::endl;
	std::cout << CYAN"Shortest span	: "WHITE << sp2.shortestSpan() << RESET << std::endl << std::endl;
	std::cout << CYAN"Longest span	: "WHITE << sp2.longestSpan() << RESET << std::endl << std::endl;
	std::cout << BLUE"=============================================" << RESET << std::endl;
	
	return (0);
}
