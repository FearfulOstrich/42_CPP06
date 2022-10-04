/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ANumber.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:19:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:14:14 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANUMBER_HPP
# define ANUMBER_HPP

# include <stdexcept>
# include <iostream>

class CharNumber;
class IntNumber;
class FloatNumber;
class DoubleNumber;

class ANumber
{
private:

protected:

public:
	// Constructors
	ANumber(void);
	ANumber(const ANumber& other);

	// Destructors
	virtual ~ANumber();

	// Operator overload
	ANumber&	operator=(const ANumber& other);
	virtual		operator CharNumber() const = 0;
	virtual		operator IntNumber() const = 0;
	virtual		operator FloatNumber() const = 0;
	virtual		operator DoubleNumber() const = 0;
	
	// Accessors (getters should return by value or const-reference)
	// Member functions
	virtual ANumber*	clone(void) const = 0;

	//Exceptions
	class WrongInputException: std::exception
	{
	public:
		const char*	what() const throw();
	};
	class ImpossibleConversionException: std::exception
	{
	public:
		const char*	what() const throw();
	};
};

#endif
