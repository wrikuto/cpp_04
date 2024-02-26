/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:59:56 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/07 21:11:09 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	upper_case(char c)
{
	char rtn = 0;

	if ('a' <= c && c <= 'z')
		rtn = c - 32;
	else
		rtn = c;
	return (rtn);
}

int main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << upper_case(argv[i][j]);
				j++;
			}
			i++;
			if (i < argc)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}