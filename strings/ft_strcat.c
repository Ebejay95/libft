/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:42:29 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/04 12:43:16 by jeberle          ###   ########.fr       */
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