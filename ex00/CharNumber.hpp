/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharNumber.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:41:27 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:07:00 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARNUMBER_HPP
# define CHARNUMBER_HPP

# include <iostream>
# include "ANumber.hpp"

class IntNumber;
class FloatNumber;
class DoubleNumber;

class CharNumber: public ANumber
{
private:
	char	_number;
protected:

public:
	// Constructors
	CharNumber(char number);
	CharNumber(const CharNumber& other);

	// Destructors
	virtual ~CharNumber();

	// Operator overload
	CharNumber&	operator=(const CharNumber& other);
				operator CharNumber() const;
				operator IntNumber() const;
				operator FloatNumber() const;
				operator DoubleNumber() const;
				
	// Accessors (getters should return by value or const-reference)
	char	getNumber(void) const;
	
	// Member functions
	CharNumber*	clone(void) const;
};

std::ostream&	operator<<(std::ostream& os, const CharNumber& obj);

#endif
