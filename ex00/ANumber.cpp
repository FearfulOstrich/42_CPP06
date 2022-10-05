/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ANumber.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:41:32 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 09:05:15 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ANumber.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

ANumber::ANumber(void)
{
	return ;
}

ANumber::ANumber(const ANumber& other)
{
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

ANumber::~ANumber(void)
{
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

ANumber&	ANumber::operator=(const ANumber& other)
{
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
