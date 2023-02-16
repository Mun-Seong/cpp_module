/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:16:27 by museo             #+#    #+#             */
/*   Updated: 2022/10/18 16:26:18 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string GetTenWord(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
		return (str.substr(0, 9) + '.');
} 

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string Contact::GetFirstName() const { return mFirstName; }
void Contact::SetFirstName(const std::string &firstName) { mFirstName = firstName; }

std::string Contact::GetLastName() const { return mLastName; }
void Contact::SetLastName(const std::string &lastName) { mLastName = lastName; }

std::string Contact::GetNickName() const { return mNickName; }
void Contact::SetNickName(const std::string &nickName) { mNickName = nickName; }

std::string Contact::GetPhoneNumber() const { return mPhoneNumber; }
void Contact::SetPhoneNumber(const std::string &phoneNumber) { mPhoneNumber = phoneNumber; }

std::string Contact::GetDarkestSecret() const { return mDarkestSecret; }
void Contact::SetDarkestSecret(const std::string &darkestSecret) { mDarkestSecret = darkestSecret; }

void Contact::ShowSmallInfo(void) {
	std::cout << std::setw(10) << GetTenWord(GetFirstName()) << "|";
	std::cout << std::setw(10) << GetTenWord(GetLastName()) << "|";
	std::cout << std::setw(10) << GetTenWord(GetNickName()) << std::endl;
}

void Contact::ShowAllInfo(void) {
	std::cout << std::endl << "First Name : " << GetFirstName() << std::endl;
	std::cout << "Last Name : " << GetLastName() << std::endl;
	std::cout << "Nickname : " << GetNickName() << std::endl;
	std::cout << "Phone Number : " << GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << GetDarkestSecret() << std::endl << std::endl;
}
