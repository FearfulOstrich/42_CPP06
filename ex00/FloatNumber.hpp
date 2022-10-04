/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatNumber.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:41:41 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:19:44 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOATNUMBER_HPP
# define FLOATNUMBER_HPP

# include <iostream>
# include <limits>
# include <stdio.h>
# include "ANumber.hpp"
# include "CharNumber.hpp"
# include "IntNumber.hpp"
# include "DoubleNumber.hpp"

class FloatNumber: public ANumber
{
private:
	float	_number;
protected:

public:
	// Constructors
	FloatNumber(std::string literal);
	FloatNumber(float number);
	FloatNumber(const FloatNumber& other);

	// Destructors
	virtual ~FloatNumber();

	// Operator overload
	FloatNumber&	operator=(const FloatNumber& other);
					operator CharNumber() const;
					operator IntNumber() const;
					operator FloatNumber() const;
					operator DoubleNumber() const;

	// Accessors (getters should return by value or const-reference)
	float	getNumber(void) const;
	
	// Member functions
	FloatNumber*	clone(void) const;
};

std::ostream&	operator<<(std::ostream& os, const FloatNumber& obj);

#endif
