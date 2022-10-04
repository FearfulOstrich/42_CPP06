/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharNumber.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:41:35 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:07:15 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharNumber.hpp"
#include "IntNumber.hpp"
#include "FloatNumber.hpp"
#include "DoubleNumber.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

CharNumber::CharNumber(char number)
	: _number(number)
{
	return ;
}

CharNumber::CharNumber(const CharNumber& other)
	: _number(other.getNumber())
{
	// std::cout << "CharNumber Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

CharNumber::~CharNumber(void)
{
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

CharNumber&	CharNumber::operator=(const CharNumber& other)
{
	if (this != &other)
	{
		// Copy all attributes
	}
	return (*this);
}

CharNumber::operator CharNumber() const
{
	return (CharNumber(*this));
}

CharNumber::operator IntNumber() const
{
	return (IntNumber(static_cast<int>(this->_number)));
}

CharNumber::operator FloatNumber() const
{
	return (FloatNumber(static_cast<float>(this->_number)));
}

CharNumber::operator DoubleNumber() const
{
	return (DoubleNumber(static_cast<double>(this->_number)));
}

std::ostream&	operator<<(std::ostream& os, const CharNumber& obj)
{
	if (obj.getNumber() < 32 || obj.getNumber() > 127)
		os << "Non printable";
	else
		os << obj.getNumber();
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

char	CharNumber::getNumber(void) const
{
	return (this->_number);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

CharNumber*	CharNumber::clone(void) const
{
	return (new CharNumber(*this));
}
