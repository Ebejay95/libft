/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:30:48 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/28 15:31:16 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief					copy a string to a new location
///	@algorithm				1)	declare a new char pointer for the result
///							2)	allocate memory by the length of s + 1 for 
///								termination
///							3)	check allocation success else return NULL
///							4)	copy s to cpy
/// @param s				the src string
/// @return cpy | NULL		the copy of the string at new pointer or NULL on
///							allocation error
char	*ft_strndup(const char *s, size_t size)
{
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * (size + 1));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, (size + 1));
	return (cpy);
}
