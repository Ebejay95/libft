/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 07:57:43 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 00:55:29 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

char	*ft_strstr(const char *hayst, const char *needle)
{
	size_t	n;
	size_t	h;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)hayst);
	while (hayst[h] != '\0')
	{
		n = 0;
		while (needle[n] != '\0' && needle[n] == hayst[h + n])
		{
			n++;
			if (needle[n] == '\0')
				return ((char *)(&hayst[h]));
		}
		h++;
	}
	return (NULL);
}
