/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:31:15 by museo             #+#    #+#             */
/*   Updated: 2022/11/04 16:57:45 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main()
{
	int iArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string sArr[5] = {"first", "second", "third", "forth", "fifth"};

	iter(iArr, 10, print<int>);
	std::cout << std::endl;
	iter(sArr, 5, print<std::string>);
	std::cout << std::endl;
	
	iter(iArr, 10, plusA<int>);
	iter(sArr, 5, plusA<std::string>);

	iter(iArr, 10, print<int>);
	std::cout << std::endl;
	iter(sArr, 5, print<std::string>);
	std::cout << std::endl;
}
