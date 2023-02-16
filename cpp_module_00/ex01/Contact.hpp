/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:16:31 by museo             #+#    #+#             */
/*   Updated: 2022/10/18 16:26:18 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
private:
    std::string mFirstName;
    std::string mLastName;
    std::string mNickName;
    std::string mPhoneNumber;
    std::string mDarkestSecret;

public:
	Contact(void);
	~Contact(void);

    std::string GetFirstName() const;
    void SetFirstName(const std::string &firstName);

    std::string GetLastName() const;
    void SetLastName(const std::string &lastName);

    std::string GetNickName() const;
    void SetNickName(const std::string &nickName);

    std::string GetPhoneNumber() const;
    void SetPhoneNumber(const std::string &phoneNumber);

    std::string GetDarkestSecret() const;
    void SetDarkestSecret(const std::string &darkestSecret);

    void ShowSmallInfo(void);
	void ShowAllInfo(void);
};
#endif // CONTACT_HPP