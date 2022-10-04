/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntNumber.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:15:06 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:15:39 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IntNumber.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

IntNumber::IntNumber(std::string literal)
{
	if (sscanf(literal.c_str(), "%d", &this->_number) == 0)
		throw (WrongInputException());
	return ;
}

IntNumber::IntNumber(int number)
	: _number(number)
{
	return ;
}

IntNumber::IntNumber(const IntNumber& other)
	: _number(other.getNumber())
{
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

IntNumber::~IntNumber(void)
{
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

IntNumber&	IntNumber::operator=(const IntNumber& other)
{
	if (this != &other)
	{
		// Copy all attributes
	}
	return (*this);
}

IntNumber::operator CharNumber() const
{
	if (this->_number < std::numeric_limits<char>::min() ||\
		this->_number > std::numeric_limits<char>::max())
		throw (ImpossibleConversionException());
	return (CharNumber(static_cast<char>(this->_number)));
}

IntNumber::operator IntNumber() const
{
	return (*this);
}

IntNumber::operator FloatNumber() const
{
	return (FloatNumber(static_cast<float>(this->_number)));
}

IntNumber::operator DoubleNumber() const
{
	return (DoubleNumber(static_cast<double>(this->_number)));
}

std::ostream&	operator<<(std::ostream& os, const IntNumber& obj)
{
	os << obj.getNumber();
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

int	IntNumber::getNumber(void) const
{
	return (this->_number);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

IntNumber*	IntNumber::clone(void) const
{
	return (new IntNumber(*this));
}