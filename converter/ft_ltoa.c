/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:25:58 by jeberle           #+#    #+#             */
/*   Updated: 2024/08/22 18:32:29 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static void	initialize(int *len, long *n, int *negative)
{
	long	n_work;

	*negative = 0;
	*len = 0;
	if (*n < 0)
	{
		*negative = 1;
		*n = *n * (-1);
	}
	n_work = *n;
	while (n_work > 0)
	{
		n_work = n_work / 10;
		(*len)++;
		if (n_work == 0)
			break ;
	}
}

char	*ft_ltoa(long n)
{
	int		len;
	int		negative;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == LONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	initialize(&len, &n, &negative);
	str = ft_calloc((len + 1 + negative), sizeof(char));
	if (!str)
		return (NULL);
	if (negative)
		str[0] = '-';
	str[len] = '\0';
	while (n > 0)
	{
		if (!negative)
			len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
		if (negative)
			len--;
	}
	return (str);
}
