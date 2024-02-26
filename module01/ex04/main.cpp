/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:44:17 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/24 21:25:52 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sed.hpp"

int main(int argc, char **argv)
{	
	if (argc != 4)
	{
		std::cout << "Wrong arg." << std::endl;
		return (1);
	}
	Sed sed(argv[1]);
	sed.replace(argv[2], argv[3]);
	return (0);
}

__attribute__((destructor))
static void destructor() {
    system("leaks -q sed");
}
