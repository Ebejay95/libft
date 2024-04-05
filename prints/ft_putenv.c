/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:32:13 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 16:26:54 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int	ft_putenv(char *string)
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
			if (ft_strncmp(environ[i], string, vlen) == 0 && string[vlen] == '\0')
				return (ft_putstrr(spanname + 1));
		}
		i++;
	}
	return (0);
}
