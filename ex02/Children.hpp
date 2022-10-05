/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Children.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:18:54 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 18:36:51 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHILDREN_HPP
# define CHILDREN_HPP

# include "Base.hpp"

class A: public Base
{
public:
	virtual	~A() {};
};

class B: public Base
{
public:
	virtual	~B() {};
};

class C: public Base
{
public:
	virtual	~C() {};
};

#endif