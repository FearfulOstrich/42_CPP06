/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:31:23 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 18:41:18 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassGenerator.hpp"

int	main()
{
	Base*	randomClass;
	
	randomClass = generate();
	identify(randomClass);
	identify(*randomClass);
	return (0);
}