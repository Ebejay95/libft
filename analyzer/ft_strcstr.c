/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:12:14 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/13 10:16:33 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

size_t	ft_strcstr(const char *hayst, const char *needle)
{
	size_t	n;
	size_t	h;
	size_t	count;

	h = 0;
	count = 0;
	if (needle[0] == '\0')
		return (count);
	while (hayst[h] != '\0')
	{
		n = 0;
		while (needle[n] != '\0' && needle[n] == hayst[h + n])
		{
			n++;
			if (needle[n] == '\0')
				count++;
		}
		h++;
	}
	return (count);
}
