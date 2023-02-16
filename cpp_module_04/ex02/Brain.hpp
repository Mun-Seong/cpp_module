/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:55:03 by museo             #+#    #+#             */
/*   Updated: 2022/10/23 18:56:11 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain& operator=(const Brain &copy);
	~Brain();

	std::string getIdeas(int idx) const;
	void setIdeas(const std::string &ideas, int idx);
};


#endif // BRAIN_HPP
