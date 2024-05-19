/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:50:08 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/15 14:53:17 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

size_t	ft_strcchr(const char *s, int c)
{
	unsigned char	*cs;
	unsigned char	cc;
	size_t			n;

	n = 0;
	cc = (unsigned char)c;
	cs = (unsigned char *)s;
	while (*cs != '\0')
	{
		if (cc == *cs)
			n++;
		cs++;
	}
	if (cc == '\0')
		return (n);
	return (n);
}
