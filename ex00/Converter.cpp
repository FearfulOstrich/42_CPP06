/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:37:40 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:26:09 by aalleon          ###   ########.fr       */
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
			this->_number = new CharNumber(literal.c_str()[1]);
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
	if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'')
		return ('c');
	if (literal.find_first_not_of("-0123456789") == std::string::npos)
	{
		if (literal.rfind('-') == 0)
			return ('i');
		return (0);
	}
	if (literal.find_first_not_of("-0123456789.f") == std::string::npos)
	{
		if (literal.rfind('-') != 0)
			return (0);
		if (literal.find('.') != literal.rfind('.'))
			return (0);
		if (literal.find('f') == literal.size() - 1)
			return ('f');
		if (literal.find('f') == std::string::npos)
			return ('d');
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
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		std::cout << static_cast<IntNumber>(*_number) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try
	{
		std::cout << static_cast<FloatNumber>(*_number) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "double: ";
	try
	{
		std::cout << static_cast<DoubleNumber>(*_number) << std::endl;
	}
	catch (std::exception& e)
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
