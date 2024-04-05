/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontains.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:31:38 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 09:16:27 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 				tell if a str contains a char or not
///	@algorithm			1)	terminate with negative if str is NULL
///						2)	walk trough haystack till char needle is found and
///							return 1 on  occurance else return 0 by default
/// @param haystack 	str to search char needle in
/// @param needle 		char to search for in haystack
/// @return 1|0			depenend on detection of the needle char
int	ft_strcontains(char *haystack, char needle)
{
	long long	i;

	i = 0;
	if (haystack == NULL)
		return (0);
	while (haystack[i])
	{
		if (haystack[i] == needle)
			return (1);
		i++;
	}
	return (0);
}
