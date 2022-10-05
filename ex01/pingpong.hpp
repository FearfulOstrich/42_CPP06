/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pingpong.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:02:10 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/05 16:09:54 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PINGPONG_HPP
# define PINGPONG_HPP

# include <stdint.h>
# include <iostream>
# include "Data.hpp"

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t ptr);

#endif