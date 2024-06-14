/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:32:28 by jeberle           #+#    #+#             */
/*   Updated: 2024/06/14 13:27:27 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static int	ft_addenv(char **envp, char *envline, int i)
{
	char		*newenv;

	newenv = ft_realloc(*envp, (i + 2) * sizeof(char *));
	if (!newenv)
	{
		free(envline);
		return (-1);
	}
	newenv = envline;
	newenv[i + 1] = '\0';
	*envp = newenv;
	return (0);
}

int	ft_setenv(char **envp, char *name, char *value)
{
	int			i;
	char		*envline;
	size_t		namelen;

	namelen = ft_strlen(name);
	if (!envp || !name || !value)
		return (-1);
	i = 0;
	envline = ft_calloc((namelen + ft_strlen(value) + 2), sizeof(char));
	if (!envline)
		return (-1);
	ft_strcpy(envline, name);
	ft_strcat(envline, "=");
	ft_strcat(envline, value);
	while ((*envp)[i])
	{
		if (ft_strncmp(envp[i], name, namelen) && envp[i][namelen] == '=')
		{
			envp[i] = envline;
			return (free(envp[i]), 0);
		}
		i++;
	}
	return (ft_addenv(envp, envline, i));
}
