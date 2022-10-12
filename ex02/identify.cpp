/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:28:45 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/12 16:54:11 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClassGenerator.hpp"

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Class A !!" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Class B !!" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Class C !!" << std::endl;
	return ;
}

void	identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p).~A();
		std::cout << "Class A !!" << std::endl;
	}
	catch (std::exception& e)
	{
		try
		{
			dynamic_cast<B&>(p).~B();
			std::cout << "Class B !!" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Class C !!" << std::endl;
		}
	}
	return ;
}
