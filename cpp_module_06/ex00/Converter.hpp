/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:06:13 by museo             #+#    #+#             */
/*   Updated: 2022/11/04 14:58:05 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include <limits>

class Converter
{
private:
	std::string input;
	Converter();
public:
	Converter(std::string input);
	Converter(const Converter &copy);
	Converter &operator=(const Converter &copy);
	~Converter();

	void convertAndPrint(void);

	class InvalidInputExecption : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif // CONVERTER_HPP
