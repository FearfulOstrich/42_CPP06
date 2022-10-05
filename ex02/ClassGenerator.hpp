/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassGenerator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:25:51 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 18:42:03 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSGENERATOR_HPP
# define CLASSGENERATOR_HPP

# include <iostream>
# include "Base.hpp"
# include "Children.hpp"

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif