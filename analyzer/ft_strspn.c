/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:10:41 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 16:09:47 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	span;
	size_t	set;
	size_t	is;

	span = 0;
	while (s[span] != '\0')
	{
		is = 0;
		set = 0;
		while (charset[set] != '\0')
		{
			if (charset[set] == s[span])
				is = 1;
			set++;
		}
		if (is == 0)
			break ;
		span++;
	}
	return (span);
}
