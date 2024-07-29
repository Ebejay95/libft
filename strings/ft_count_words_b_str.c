/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_b_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:19:05 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/13 10:57:18 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

size_t	ft_count_words_b_str(char const *s, char *str)
{
	size_t	count;
	int		i;
	int		state;

	state = 1;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strncmp(&s[i], str, ft_strlen(str)) == 0 && state == 0)
		{
			state = 1;
			count++;
			i += ft_strlen(str) - 1;
		}
		else if (ft_strncmp(&s[i], str, ft_strlen(str)) == 0)
			i += ft_strlen(str) - 1;
		else if (state == 1)
			state = 0;
		i++;
	}
	if (state == 0)
		count++;
	return (count);
}
