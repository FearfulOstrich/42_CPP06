/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ANumber.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:41:32 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:14:35 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ANumber.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

ANumber::ANumber(void)
{
	std::cout << "ANumber Default Constructor called." << std::endl;
	return ;
}

ANumber::ANumber(const ANumber& other)
{
	std::cout << "ANumber Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

ANumber::~ANumber(void)
{
	std::cout << "ANumber Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

ANumber&	ANumber::operator=(const ANumber& other)
{
	std::cout << "ANumber assignment operator called." << std::endl;
	if (this != &other)
	{
		// Copy all attributes
	}
	return (*this);
}

// ANumber::operator CharNumber() const
// {
// 	return ();
// }

// ANumber::operator IntNumber() const
// {
// 	return (static_cast<IntNumber>(*this));
// }

// ANumber::operator FloatNumber() const
// {
// 	return (static_cast<FloatNumber>(*this));
// }

// ANumber::operator DoubleNumber() const
// {
// 	return (static_cast<DoubleNumber>(*this));
// }

/*==============================================================================
	Getters.
==============================================================================*/

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

/*==============================================================================
	Exceptions
==============================================================================*/

const char*	ANumber::WrongInputException::what() const throw()
{
	return ("Wrong input format");
}

const char*	ANumber::ImpossibleConversionException::what() const throw()
{
	return ("Impossible");
}
