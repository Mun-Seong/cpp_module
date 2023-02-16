/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:16:37 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 14:14:32 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->mIdx = 0;
	this->mSearchIdx = -1;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void	PhoneBook::AddPB(void) {
    std::string tmp;

	if (mIdx >= 8)
		mIdx = FullPB();
	std::cin.clear();
    std::cout << "First Name : ";
    std::getline(std::cin, tmp);
    if (std::cin.eof())
    {
        std::cout << "EOF :( error!" << std::endl;
        exit(0);
    }
	mArr[mIdx].SetFirstName(tmp);
	std::cout << "Last Name : ";
    std::getline(std::cin, tmp);
    if (std::cin.eof())
    {
        std::cout << "EOF :( error!" << std::endl;
        exit(0);
    }
	mArr[mIdx].SetLastName(tmp);
	std::cout << "Nickname : ";
    std::getline(std::cin, tmp);
    if (std::cin.eof())
    {
        std::cout << "EOF :( error!" << std::endl;
        exit(0);
    }
	mArr[mIdx].SetNickName(tmp);
	std::cout << "Phone Number : ";
    std::getline(std::cin, tmp);
    if (std::cin.eof())
    {
        std::cout << "EOF :( error!" << std::endl;
        exit(0);
    }
	mArr[mIdx].SetPhoneNumber(tmp);
	std::cout << "Darkest Secret : ";
    std::getline(std::cin, tmp);
    if (std::cin.eof())
    {
        std::cout << "EOF :( error!" << std::endl;
        exit(0);
    }
	mArr[mIdx].SetDarkestSecret(tmp);
	mIdx++;
}

int		PhoneBook::FullPB(void) {
	for (int i = 0; i < 7; i++)
	{
		mArr[i] = mArr[i + 1];
	}
	return (7);
}

void	PhoneBook::SearchAllPB(void) {
	std::string stmp;
	int			itmp;

    if (mIdx == 0)
    {    
        std::cout << "Nobody....." << std::endl;
        return ;
    }
	for (int i = 0; i < mIdx; i++)
	{
		std::cout << std::setw(10) << i+1 << "|";
		mArr[i].ShowSmallInfo();
	}
	while (true)
	{
		std::cout << "Choose Indesx (exit code 99)>> ";
		std::getline(std::cin, stmp);
        if (std::cin.eof())
        {
            std::cout << "EOF :( error!" << std::endl;
            exit(0);
        }
		try {
            itmp = std::stoi(stmp);
        }
        catch (std::exception e) {
            std::cout << "Error : input is not number!!!" << std::endl;
            continue ;
        }
		if (1 <= itmp && itmp <= mIdx)
			mArr[itmp - 1].ShowAllInfo();
		else if (itmp == 99)
			break ;
		else
			std::cout << "Wrong Index ;(" << std::endl;
	}
}