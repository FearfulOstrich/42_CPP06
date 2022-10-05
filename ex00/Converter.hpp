/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:37:44 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 12:06:04 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include "ANumber.hpp"
# include "CharNumber.hpp"
# include "IntNumber.hpp"
# include "FloatNumber.hpp"
# include "DoubleNumber.hpp"

class Converter
{
private:
	ANumber*	_number;

	//Member functions
	char	_findType(const std::string& literal) const;

protected:

public:
	// Constructors
	Converter(void);
	Converter(const std::string& literal);
	Converter(const Converter& other);

	// Destructors
	virtual ~Converter();

	// Operator overload
	Converter&	operator=(const Converter& other);

	// Accessors (getters should return by value or const-reference)

	// Member functions
	void	show(void) const;

	// Exceptions
	class WrongInputException: public std::exception
	{
	public:
		const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& os, const Converter& obj);

#endif
