/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 09:41:26 by jonathanebe       #+#    #+#             */
/*   Updated: 2024/05/04 09:43:42 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

/// @brief 		apply only defined args by tyoe descriptions to process
/// @param tc 	typechar
/// @return 	0 | 1 handle or not handle
static int	filter_not_defined_arg_types(int tc)
{
	if (tc == 99 || tc == 115 || tc == 112 || tc == 100 || tc == 105)
		return (1);
	if (tc == 117 || tc == 120 || tc == 88 || tc == 37)
		return (1);
	return (0);
}

/// @brief 		conclusion of return for any fail occurance
/// @param args args array to be free'd
/// @return 	-1
int	ret_error(va_list args)
{
	va_end(args);
	return (-1);
}

/// @brief 			the core functionality gateway to all print functions
/// @param text 	text to wrap the args prints
/// @param args 	args array
/// @return 		write state
int	formatted_print(int fd, const char *text, va_list args)
{
	int	prr;

	if (filter_not_defined_arg_types(*text))
	{
		prr = smart_print(fd, *text, args);
		if (prr < 0)
			return (-1);
		return (prr);
	}
	return (0);
}

/// @brief 		walker over the stirng, skip placeholders but retrieve
///				their typchar and start the printing process for args
/// @param text text to wrap the args prints
/// @param args args array
/// @param idx 	index of outer loop 
/// @return 	write state
static int	pr_loop(int fd, const char *text, va_list args, size_t *idx)
{
	int	prr;

	if (text[*idx] == 37 && text[*idx + 1] != '\0')
	{
		prr = formatted_print(fd, &text[*idx + 1], args);
		if (prr < 0)
			return (-1);
		*idx = *idx + 2;
	}
	else
	{
		prr = ft_putcharr_fd(fd, text[*idx]);
		if (prr < 0)
			return (-1);
		(*idx)++;
	}
	return (prr);
}

/// @brief 		print a text and any type args in format and return
///				write state
/// @param text the text conaining placeholders
/// @param ... 	va_list of args
/// @return 	write state
int	ft_fprintf(int fd, const char *text, ...)
{
	va_list		args;
	size_t		idx;
	int			pr_len;
	int			prr;

	idx = 0;
	pr_len = 0;
	va_start(args, text);
	while (text[idx] != '\0')
	{
		prr = pr_loop(fd, text, args, &idx);
		if (prr < 0)
			return (ret_error(args));
		pr_len = pr_len + prr;
	}
	va_end(args);
	return (pr_len);
}
