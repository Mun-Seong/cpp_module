/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:16:34 by museo             #+#    #+#             */
/*   Updated: 2022/10/18 18:27:53 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook pb;
	std::string line;

	while (true)
	{
		std::cout << "You have only three command (ADD, SEARCH, EXIT) >> ";
		std::getline(std::cin, line);
        if (std::cin.eof())
        {
            std::cout << "EOF :( error!" << std::endl;
            break;
        }
		if (!line.compare("ADD"))
			pb.AddPB();
		else if (!line.compare("SEARCH"))
			pb.SearchAllPB();
		else if (!line.compare("EXIT"))
		{
			std::cout << "Program Exit!!" << std::endl;
			break ;
		}
		else 
		{	
            std::cout << "Wrong Command. if you wanna exit Please use EXIT command!" << std::endl;
            std::cin.clear();
        }
	}
	return (0);
}