/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:59:45 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 16:03:25 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pingpong.hpp"

Data*	deserialize(uintptr_t ptr)
{
	return (reinterpret_cast<Data*>(ptr));
}