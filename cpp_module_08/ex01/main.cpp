/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:48:29 by museo             #+#    #+#             */
/*   Updated: 2022/11/05 15:00:31 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	/** Defual Test */
	{
		
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	/** Manual Test*/
	try {
		std::cout << "-----------------------------------------------------" << std::endl;
		Span bigSp(15000);
		bigSp.addAllNumber();
		std::cout << bigSp.shortestSpan() << std::endl;
		std::cout << bigSp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	/** See Test*/
	try {
		std::cout << "-----------------------------------------------------" << std::endl;
		Span seeSp(50);
		seeSp.addAllNumber();
		std::cout << seeSp.shortestSpan() << std::endl;
		std::cout << seeSp.longestSpan() << std::endl;
		std::cout << seeSp;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
