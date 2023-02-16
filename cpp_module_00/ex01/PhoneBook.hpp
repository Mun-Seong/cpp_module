/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:16:39 by museo             #+#    #+#             */
/*   Updated: 2022/10/18 16:26:18 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	mArr[8];
	int		mIdx;
	int		mSearchIdx;

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	AddPB(void);
	int		FullPB(void);
	void	SearchAllPB(void);
};

#endif // PHONEBOOK_HPP