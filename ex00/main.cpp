/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:46 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 16:31:46 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"

int	main(int argc, char *argv[])
{
	Converter	converter;
	
	if (argc != 2)
		return (1);
	try
	{
		converter = Converter(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << "could not create converter because: " << e.what();
		std::cerr << "." << std::endl;
		return (1);
	}
	converter.show();
	return (0);
}