/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:26:04 by museo             #+#    #+#             */
/*   Updated: 2022/11/04 18:13:47 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#define MAX_VAL 750
int main(int, char**)
{
	/** 0 Make Test */
	try {
		Array<std::string> sArr(0);
		std::cout << sArr[0] << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	/** Sting Arr Test */
	try {
		Array<std::string> sArr(10);
		std::cout << sArr << std::endl;
		for (unsigned int i=0; i<sArr.size(); i++)
			sArr[i] = "element";
		std::cout << sArr;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	/** Defual Test */
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
