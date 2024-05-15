/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:32:13 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/15 10:08:33 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

//void	ft_putallenv(char **env)
//{
//	int	envdx;
//	char	*print;
//
//	envdx = 0;
//	while (env[envdx] != 0)
//	{
//		print = ft_color(env[envdx], YELLOW);
//		ft_printf(print);
//		ft_printf("\n");
//		free(print);
//		envdx++;
//	}
//}

int	ft_putenv(char *str)
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
			if (ft_strncmp(environ[i], str, vlen) == 0 && str[vlen] == '\0')
				return (ft_putstrr(spanname + 1));
		}
		i++;
	}
	return (0);
}
