/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:05 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 19:57:05 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fname, std::string s1, std::string s2) {
    this->fname = fname;
    this->s1 = s1;
    this->s2 = s2;
    this->new_fname = fname + ".replace";
}

Replace::~Replace(){ return ; }

void Replace::setFin(std::ifstream &fin) { 
     
    this->fin = &fin;
}
void Replace::setFout(std::ofstream &fout) {
    this->fout = &fout; 
}

std::string Replace::getFname() const { return fname; }
std::string Replace::getNewFname() const { return new_fname; }

void Replace::replace(void) {
    std::size_t pos;
    std::size_t rpos = 0;
    while (std::getline(*fin, readLine))
    {
        rpos = 0;
        while (true)
        {
            pos = readLine.find(s1, rpos);
            if (pos == std::string::npos)
            {
                *(fout) << readLine.substr(rpos, readLine.length() - rpos);
                break;
            }
            *(fout) << readLine.substr(rpos, pos-rpos) << s2;
            rpos = pos + s1.length();
        }
        *(fout) << std::endl;
    }
    fin->close();
    fout->close();
    return ;
}
