/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:06:10 by museo             #+#    #+#             */
/*   Updated: 2022/11/05 13:12:16 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() { }

Converter::Converter(std::string input)
{
	this->input = input;
}

Converter::Converter(const Converter &copy) {
	*this = copy;
}

Converter &Converter::operator=(const Converter &copy) {
	if (this != &copy)
	{
		this->input = copy.input;
	}
	return *this;
}

Converter::~Converter() { }

void Converter::convertAndPrint(void) {

	if (input.length() == 1 && !(std::isdigit(input[0])))
	{
		std::cout << "char: " << static_cast<char>(input[0]) << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "char: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "char: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
	else
	{
		char *non_num = NULL;
		double stod = strtod(input.c_str(), &non_num);
		//std::cout << stod << " " << non_num << std::endl;
		if (*non_num != '\0' && strlen(non_num) != 1) // && !(non_num[0] == 'f' || non_num[0] == 'F'))
		{
			throw InvalidInputExecption();
		}
		if (!(non_num[0] == 0 || non_num[0] == 'f' || non_num[0] == 'F'))
			throw InvalidInputExecption();
		/** Char casting */
		else {
		{
			if (input.find("nan") != std::string::npos)
				std::cout << "char:	impossible" << std::endl;
			else if (stod < 0 || stod > 127)
				std::cout << "char:	impossible" << std::endl;
			else if (stod < 32 || stod == 127)
				std::cout << "char:	Non displayable" << std::endl;
			else
				std::cout << "char:	" << static_cast<char>(stod) << std::endl;
		}
		/** Int casting */
		{
			if (input.find("nan") != std::string::npos)
				std::cout << "int:	impossible" << std::endl;
			else if (stod < std::numeric_limits<int>::min() || stod > std::numeric_limits<int>::max())
				std::cout << "int:	impossible" << std::endl;
			else
				std::cout << "int:	" << static_cast<int>(stod) << std::endl;
		}
		/** Float casting */
		{
			{
				std::cout << "float:	" << static_cast<float>(stod);
				if (static_cast<int>(stod) == stod)
					std::cout << ".0f";
				else
					std::cout << 'f';
				std::cout << std::endl;
			}
		}
		/** Double casting */
		{
			{
				std::cout << "double:	" << static_cast<double>(stod);
				if (static_cast<int>(stod) == stod)
					std::cout << ".0";
				std::cout << std::endl;
			}
		}
		}
	}
}

const char *Converter::InvalidInputExecption::what() const throw() { return "invalid input ;("; }
