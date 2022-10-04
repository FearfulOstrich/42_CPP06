/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleNumber.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:49:12 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:21:01 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DoubleNumber.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

DoubleNumber::DoubleNumber(std::string literal)
{
	if (sscanf(literal.c_str(), "%lf", &this->_number) == 0)
		throw (WrongInputException());
	return ;
}

DoubleNumber::DoubleNumber(double number)
	: _number(number)
{
	return ;
}

DoubleNumber::DoubleNumber(const DoubleNumber& other)
	: _number(other.getNumber())
{
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

DoubleNumber::~DoubleNumber(void)
{
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

DoubleNumber&	DoubleNumber::operator=(const DoubleNumber& other)
{
	if (this != &other)
	{
		// Copy all attributes
	}
	return (*this);
}

DoubleNumber::operator CharNumber() const
{
	if (this->_number < std::numeric_limits<char>::min() ||\
		this->_number > std::numeric_limits<char>::max())
		throw (ImpossibleConversionException());
	return (CharNumber(static_cast<char>(this->_number)));
}

DoubleNumber::operator IntNumber() const
{
	if (this->_number < std::numeric_limits<int>::min() ||\
		this->_number > std::numeric_limits<int>::max())
		throw (ImpossibleConversionException());
	return (IntNumber(static_cast<int>(this->_number)));
}

DoubleNumber::operator FloatNumber() const
{
	if (this->_number < std::numeric_limits<float>::min() ||\
		this->_number > std::numeric_limits<float>::max())
		throw (ImpossibleConversionException());
	return (FloatNumber(static_cast<float>(this->_number)));
}

DoubleNumber::operator DoubleNumber() const
{
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const DoubleNumber& obj)
{
	os << obj.getNumber();
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

double	DoubleNumber::getNumber(void) const
{
	return (this->_number);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

DoubleNumber*	DoubleNumber::clone(void) const
{
	return (new DoubleNumber(*this));
}