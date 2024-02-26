/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:44:56 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/24 18:37:00 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>

class Sed
{
	private:
		std::string	_inFile;
		std::string	_outFile;

	public:
		Sed(std::string filename);
		~Sed() {};
		void replace(std::string s1, std::string s2);
		
};

#endif