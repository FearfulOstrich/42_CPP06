/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatNumber.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:41:45 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:20:01 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FloatNumber.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

FloatNumber::FloatNumber(std::string literal)
{
	if (sscanf(literal.c_str(), "%f", &this->_number) == 0)
		throw (WrongInputException());
	return ;
}

FloatNumber::FloatNumber(float number)
	: _number(number)
{
	return ;
}

FloatNumber::FloatNumber(const FloatNumber& other)
	: _number(other.getNumber())
{
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

FloatNumber::~FloatNumber(void)
{
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

FloatNumber&	FloatNumber::operator=(const FloatNumber& other)
{
	if (this != &other)
	{
		// Copy all attributes
	}
	return (*this);
}

FloatNumber::operator CharNumber() const
{
	if (this->_number < std::numeric_limits<char>::min() ||\
		this->_number > std::numeric_limits<char>::max())
		throw (ImpossibleConversionException());
	return (CharNumber(static_cast<char>(this->_number)));
}

FloatNumber::operator IntNumber() const
{
	if (this->_number < std::numeric_limits<int>::min() ||\
		this->_number > std::numeric_limits<int>::max())
		throw (ImpossibleConversionException());
	return (IntNumber(static_cast<int>(this->_number)));
}

FloatNumber::operator FloatNumber() const
{
	return (*this);
}

FloatNumber::operator DoubleNumber() const
{
	return (DoubleNumber(static_cast<double>(this->_number)));
}

std::ostream&	operator<<(std::ostream& os, const FloatNumber& obj)
{
	os << obj.getNumber();
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

float	FloatNumber::getNumber(void) const
{
	return (this->_number);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

FloatNumber*	FloatNumber::clone(void) const
{
	return (new FloatNumber(*this));
}