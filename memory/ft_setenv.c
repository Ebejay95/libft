/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:32:28 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/14 12:18:52 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int	ft_setenv(char **envp, char *name, char *value)
{
	int			i;
	char		*envline;

	if (!envp || !name || !value)
		return (-1);
	i = 0;
	envline = ft_calloc((ft_strlen(name) + ft_strlen(value) + 2), sizeof(char));
	if (!envline)
		return (-1);
	ft_strcpy(envline, name);
	ft_strcat(envline, "=");
	ft_strcat(envline, value);
	while ()
	{
		
	}
}
