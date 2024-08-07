/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:31:11 by jeberle           #+#    #+#             */
/*   Updated: 2024/07/25 04:47:59 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 					copy string range by two char pointer and size
/// @algorithm				1)	check the existance of trg
///							2)	cast the src pointer to char for strlen
///								and get len of src for returns
///							3)	handle the edge case that size may be 0
///								and return len only
///							3)	perform copy on each byte in the range by 
///								moving the pointers and writing to thier
///								pointed to values while keeping track of size
///							4)	terminate and return len
/// @param trg 				the pointer to be copied to
/// @param src 				the src string
/// @param size 			the range to be copied
/// @return len | 0			the length of src or 0 if trg is not defined
size_t	ft_strncpy(char *trg, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	while (i < size && src[i] != '\0')
	{
		trg[i] = src[i];
		i++;
	}
	while (i < size)
	{
		trg[i] = '\0';
		i++;
	}
	return (len);
}
