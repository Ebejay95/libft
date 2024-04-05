/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:31:54 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 16:26:50 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

char	*ft_getenv(const char *name)
{
	extern char	**environ;
	int			i;
	int			vlen;
	char		*spanname;

	i = 0;
	while (environ[i] != NULL)
	{
		spanname = ft_strchr(environ[i], '=');
		if (spanname != NULL)
		{
			vlen = spanname - environ[i];
			if (ft_strncmp(environ[i], name, vlen) == 0 && name[vlen] == '\0')
				return (ft_strdup(spanname + 1));
		}
		i++;
	}
	return (NULL);
}
