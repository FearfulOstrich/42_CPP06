/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:20:26 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 18:42:46 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "ClassGenerator.hpp"

Base*	generate(void)
{
	int	random;
	
	srand(time(NULL));
	random = rand();
	if (random % 3 == 0)
	{
		std::cout << "generate A" << std::endl;
		return (new A());
	}
	else if (random % 3 == 1)
	{
		std::cout << "generate B" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "generate C" << std::endl;
		return (new C());
	}
}