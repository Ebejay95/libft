/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendswith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:23:17 by jeberle           #+#    #+#             */
/*   Updated: 2024/05/19 15:34:37 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

int	ft_strendswith(char *s, char *check)
{
	char	*revs;
	char	*revcheck;
	size_t	revchecklen;

	revs = ft_strrev(s);
	if (revs == NULL)
		return (0);
	revcheck = ft_strrev(check);
	if (revcheck == NULL)
	{
		free(revs);
		return (0);
	}
	revchecklen = ft_strlen(revcheck);
	if (ft_strncmp(revs, revcheck, revchecklen) == 0)
	{
		free(revs);
		free(revcheck);
		return (1);
	}
	free(revs);
	free(revcheck);
	return (0);
}
