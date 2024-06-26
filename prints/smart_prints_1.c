/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_prints_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:27:32 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 10:11:30 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 		write a char to output and return write state
/// @param c 	the char to be written
/// @return 	the write state
int	smart_print_c(int fd, int c)
{
	if (ft_putcharr_fd(fd, c) < 0)
		return (-1);
	return (1);
}

/// @brief 		write a string to output and return write state
///				and check fur NULL pointer - treat it as (null)
/// @param s 	the string to be written
/// @return 	the write state
int	smart_print_s(int fd, char *s)
{
	if (s == NULL)
	{
		if (ft_putstrr_fd(fd, "(null)") < 0)
			return (-1);
		return (6);
	}
	if (ft_putstrr_fd(fd, s) < 0)
		return (-1);
	return (ft_strlen(s));
}

/// @brief 		write a pointer to output and return write state
///				add an 0x in the bginning and conv remains to
///				lowercase hexa
/// @param p 	the pointer to be written
/// @return 	the write state
int	smart_print_p(int fd, void *p)
{
	unsigned long long int	ptr;
	char					*s;
	int						rl;

	ptr = (unsigned long long int)p;
	if (p == NULL)
		return (null_pointer(fd));
	s = ft_strbase(ptr, "0123456789abcdef");
	if (s == NULL)
		return (-1);
	if (ft_putstrr_fd(fd, "0x") < 0)
	{
		free(s);
		return (-1);
	}
	if (ft_putstrr_fd(fd, s) < 0)
	{
		free(s);
		return (-1);
	}
	rl = ft_strlen(s) + 2;
	free(s);
	return (rl);
}

/// @brief 		write a decimal to output and return write state
/// @param i 	the decimal to be written
/// @return 	the write state
int	smart_print_d(int fd, int i)
{
	return (ft_putnbrr_fd(fd, i));
}

/// @brief 		write a int to output and return write state
/// @param i 	the int to be written
/// @return 	the write state
int	smart_print_i(int fd, int i)
{
	char	*s;
	int		rl;

	s = ft_itoa(i);
	if (s == NULL)
		return (-1);
	if (ft_putstrr_fd(fd, s) < 0)
	{
		free(s);
		return (-1);
	}
	rl = ft_strlen(s);
	free(s);
	return (rl);
}
