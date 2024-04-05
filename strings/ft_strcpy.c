/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:46:53 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 13:48:28 by jeberle          ###   ########.fr       */
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
size_t	ft_strcpy(char *trg, const char *src)
{
	size_t	len;

	src = (char *)src;
	len = ft_strlen(src);
	while (*src != '\0')
	{
		*trg = *src;
		src++;
		trg++;
	}
	*trg = '\0';
	return (len);
}
