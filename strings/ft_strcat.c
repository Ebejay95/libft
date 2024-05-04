/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 09:32:25 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 09:34:22 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

size_t	ft_strcat(char *trg, const char *src)
{
	size_t	c;
	size_t	trg_len;
	size_t	src_len;

	c = 0;
	trg_len = 0;
	src_len = ft_strlen(src);
	while (trg[trg_len] != '\0')
		trg_len++;
	while (src[c] != '\0')
	{
		trg[trg_len + c] = src[c];
		c++;
	}
	trg[trg_len + c] = '\0';
	return (trg_len + src_len);
}
