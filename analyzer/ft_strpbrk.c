/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:42:43 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 14:11:52 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

char	*ft_strpbrk(const char *s, const char *charset)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (ft_strchr(charset, s[i]))
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
