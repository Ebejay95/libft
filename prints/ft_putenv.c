/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:32:13 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/14 13:45:34 by jeberle          ###   ########.fr       */
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

int	ft_putenv(char **envp)
{
	int			i;

	i = 0;
	while (envp[i] != NULL)
	{
		ft_printf(envp[i]);
		i++;
	}
	return (0);
}
