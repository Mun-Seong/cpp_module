/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:08 by museo             #+#    #+#             */
/*   Updated: 2022/10/19 00:17:09 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
private:
    std::string fname;
    std::string s1;
    std::string s2;
    std::string new_fname;
    std::string readLine;

    std::ifstream *fin;
    std::ofstream *fout;
public:
    Replace(std::string fname, std::string s1, std::string s2);
    ~Replace();

    void replace(void);

    void setFin(std::ifstream &fin);
    void setFout(std::ofstream &fout);

    std::string getFname() const;
    std::string getNewFname() const;
};

#endif