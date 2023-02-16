/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:00 by museo             #+#    #+#             */
/*   Updated: 2022/10/27 14:18:41 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
        std::cerr << "Argument error" << std::endl;
    else if (argv[2] == NULL || argv[2][0] == 0 || argv[3] == NULL)
        std::cerr << "Argument error" << std::endl;
    else
    {
        Replace re(argv[1], argv[2], argv[3]);
        std::ifstream fin(re.getFname().c_str());
        if (fin.fail())
        {
            std::cerr << re.getFname() << ": No such file or directory" << std::endl;
            return (1);
        }
        re.setFin(fin);
        std::ofstream fout(re.getNewFname().c_str());
        if (fout.fail())
        {
            std::cerr << re.getNewFname() << ": Create Fail" << std::endl;
            return (1);
        }
        re.setFout(fout);
        re.replace();
    }
}