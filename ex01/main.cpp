/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:00:37 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 16:32:52 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pingpong.hpp"

int	main()
{
	Data	data = {42, 42.42f, 'o'};
	Data*	ptr;
	
	std::cout << &data << " -> " << data.n << " | ";
	std::cout << data.x << " | " << data.c << ";" << std::endl;
	ptr = deserialize(serialize(&data));
	std::cout << ptr << " -> " << ptr->n << " | ";
	std::cout << ptr->x << " | " << ptr->c << ";" << std::endl;
	return (0);
}