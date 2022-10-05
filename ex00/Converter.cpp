/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:37:40 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 12:06:30 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Converter::Converter(void)
	: _number(NULL)
{
	return ;
}

Converter::Converter(const std::string& literal)
{
	char	type;
	
	type = this->_findType(literal);
	switch (type)
	{
		case 'c':
			this->_number = new CharNumber(literal[0]);
			break ;
		case 'i':
			this->_number = new IntNumber(literal);
			break ;
		case 'f':
			this->_number = new FloatNumber(literal);
			break ;
		case 'd':
			this->_number = new DoubleNumber(literal);
			break ;
		default:
			throw (WrongInputException());
	}
	return ;
}

Converter::Converter(const Converter& other)
{
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Converter::~Converter(void)
{
	delete this->_number;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Converter&	Converter::operator=(const Converter& other)
{
	if (this != &other)
	{
		this->_number = other._number->clone();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Converter& obj)
{
	(void)obj;
	os << "[Converter]";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

char	Converter::_findType(const std::string& literal) const
{
	std::cout << literal << std::endl;
	if (literal.size() == 1 && std::isdigit(literal[0]) == 0)
		return ('c');
	if (literal.find_first_not_of("-0123456789") == std::string::npos)
	{
		if (literal.rfind('-') == 0)
			return ('i');
		if (literal.find('-') == std::string::npos)
			return ('i');
		return (0);
	}
	if (literal.find_first_not_of("-0123456789.f") == std::string::npos)
	{
		if (literal.find('-') != std::string::npos && literal.rfind('-') != 0)
			return (0);
		if (literal.find('.') != literal.rfind('.'))
			return (0);
		if (literal.find('f') == literal.size() - 1)
		{
			std::cout << "found float." << std::endl;
			return ('f');
		}
		if (literal.find('f') == std::string::npos)
		{
			std::cout << "found double." << std::endl;
			return ('d');
		}
		return (0);
	}
	return (0);
}

void	Converter::show(void) const
{
	std::cout << "char: ";
	try
	{
		std::cout << static_cast<CharNumber>(*_number) << std::endl;
	}
	catch (ANumber::ImpossibleConversionException& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		std::cout << static_cast<IntNumber>(*_number) << std::endl;
	}
	catch (ANumber::ImpossibleConversionException& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try
	{
		std::cout << static_cast<FloatNumber>(*_number) << std::endl;
	}
	catch (ANumber::ImpossibleConversionException& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "double: ";
	try
	{
		std::cout << static_cast<DoubleNumber>(*_number) << std::endl;
	}
	catch (ANumber::ImpossibleConversionException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

/*==============================================================================
	Exceptions
==============================================================================*/

const char*	Converter::WrongInputException::what() const throw()
{
	return ("Wrong input format");
}
