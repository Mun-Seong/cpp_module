/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:16:29 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 19:34:08 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "address str : " << &str << std::endl;
    std::cout << "address str : " << stringPTR << std::endl;
    std::cout << "address str : " << &stringREF << std::endl;
    
    std::cout << "address stringPTR : " << &stringPTR << std::endl << std::endl;
    std::cout << "value str : " << str << std::endl;  
    std::cout << "value *stringPTR : " << *stringPTR << std::endl;
    std::cout << "value stringREF : " << stringREF << std::endl;

    return 0;
}