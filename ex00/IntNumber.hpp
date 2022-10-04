/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntNumber.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:14:49 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/04 19:15:08 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTNUMBER_HPP
# define INTNUMBER_HPP

# include <iostream>
# include <limits>
# include <cstdio>
# include "ANumber.hpp"
# include "CharNumber.hpp"
# include "FloatNumber.hpp"
# include "DoubleNumber.hpp"

class IntNumber: public ANumber
{
private:
	int	_number;
protected:

public:
	// Constructors
	IntNumber(std::string literal);
	IntNumber(int number);
	IntNumber(const IntNumber& other);

	// Destructors
	virtual ~IntNumber();

	// Operator overload
	IntNumber&	operator=(const IntNumber& other);
				operator CharNumber() const;
				operator IntNumber() const;
				operator FloatNumber() const;
				operator DoubleNumber() const;
	
	// Accessors (getters should return by value or const-reference)
	int	getNumber(void) const;
	
	// Member functions
	IntNumber*	clone(void) const;
};

std::ostream&	operator<<(std::ostream& os, const IntNumber& obj);

#endif
