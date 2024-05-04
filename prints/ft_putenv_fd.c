/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:18:30 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 10:20:19 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int	ft_putenv_fd(int fd, char *str)
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
				return (ft_putstrr_fd(fd, spanname + 1));
		}
		i++;
	}
	return (0);
}