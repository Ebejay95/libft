/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbits_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:15:55 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 10:16:21 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_putbits_fd(int fd, int n)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (n & (1 << i))
			write(fd, "1", 1);
		else
			write(fd, "0", 1);
		i--;
	}
}

