/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:32:28 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 16:40:27 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int	ft_setenv(const char *name, const char *value, int overwrite)
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
