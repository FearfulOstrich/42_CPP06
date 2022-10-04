/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleNumber.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:49:07 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:21:12 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLENUMBER_HPP
# define DOUBLENUMBER_HPP

# include <iostream>
# include <limits>
# include <stdio.h>
# include "ANumber.hpp"
# include "CharNumber.hpp"
# include "IntNumber.hpp"
# include "FloatNumber.hpp"

class DoubleNumber: public ANumber
{
private:
	double	_number;
protected:

public:
	// Constructors
	DoubleNumber(std::string literal);
	DoubleNumber(double number);
	DoubleNumber(const DoubleNumber& other);

	// Destructors
	virtual ~DoubleNumber();

	// Operator overload
	DoubleNumber&	operator=(const DoubleNumber& other);
					operator CharNumber() const;
					operator IntNumber() const;
					operator FloatNumber() const;
					operator DoubleNumber() const;

	// Accessors (getters should return by value or const-reference)
	double	getNumber(void) const;
	
	// Member functions
	DoubleNumber*	clone(void) const;
};

std::ostream&	operator<<(std::ostream& os, const DoubleNumber& obj);

#endif
