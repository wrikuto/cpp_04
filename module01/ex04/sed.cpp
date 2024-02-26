/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:28:37 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/24 21:26:28 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string filename)
:_inFile(filename)
{
	this->_outFile = this->_inFile + ".replace";
}


void	Sed::replace(std::string s1, std::string s2)
{
	std::string		line;
	std::ifstream	rdF;
	std::ofstream	outF;
	size_t			offset;

	rdF.open(this->_inFile);
	if (rdF.fail())
	{
		std::cerr << "ERR: Can\'t open file." << std::endl;
		exit(1);
	}
	if ( !(std::getline(rdF, line, '\0')) )
		std::cerr << "Empty file." << std::endl;
	else
	{
		outF.open(this->_outFile);
		if (outF.fail())
		{
			std::cerr << "out file fail!" << std::endl;
			exit(1);
		}
		offset = line.find(s1);
		while (offset != std::string::npos)
		{
			line.erase(offset, s1.length());
			line.insert(offset, s2);
			offset = line.find(s1, offset + s2.length());
		}
		outF << line;
		outF.close();
	}
	rdF.close();

}