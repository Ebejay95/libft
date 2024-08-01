/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_b_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:31:03 by jeberle           #+#    #+#             */
/*   Updated: 2024/07/31 13:29:07 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static char	*build_substr(int substr_start, int substr_end, const char *s)
{
	int		substr_idx;
	char	*substr;

	substr_idx = 0;
	substr = ft_calloc((substr_end - substr_start) + 1, sizeof(char));
	if (!substr)
		return (NULL);
	while (substr_idx < (substr_end - substr_start))
	{
		substr[substr_idx] = s[substr_start + substr_idx];
		substr_idx++;
	}
	substr[substr_idx] = '\0';
	return (substr);
}

static char	**ft_split_clear_all(int substr_idx, char **substrs)
{
	while (substr_idx > 0)
	{
		substr_idx--;
		free(substrs[substr_idx]);
	}
	free(substrs);
	return (NULL);
}

static char	**build_substrs(char const *s, char *separator, char **substrs)
{
	int	i;
	int	substrs_idx;
	int	substr_rel_start;
	int	sep_len;

	sep_len = ft_strlen(separator);
	i = 0;
	substrs_idx = 0;
	while (s[i] != '\0')
	{
		while (ft_strncmp(&s[i], separator, sep_len) == 0 && s[i] != '\0')
			i += sep_len;
		substr_rel_start = i;
		while (ft_strncmp(&s[i], separator, sep_len) != 0 && s[i] != '\0')
			i++;
		if (substr_rel_start != i)
		{
			substrs[substrs_idx] = build_substr(substr_rel_start, i, s);
			if (!substrs[substrs_idx])
				return (ft_split_clear_all(substrs_idx, substrs));
			substrs_idx++;
		}
	}
	return (substrs);
}

char	**ft_split_b_str(char const *s, char *separator)
{
	char		**substrs;
	int			count_words;
	int			sep_len;
	const char	*tmp;

	count_words = 0;
	sep_len = ft_strlen(separator);
	tmp = s;
	while (*tmp != '\0')
	{
		while (ft_strncmp(tmp, separator, sep_len) == 0 && *tmp != '\0')
			tmp += sep_len;
		if (*tmp != '\0')
			count_words++;
		while (ft_strncmp(tmp, separator, sep_len) != 0 && *tmp != '\0')
			tmp++;
	}
	substrs = ft_calloc(count_words + 1, sizeof(char *));
	if (substrs == NULL)
		return (NULL);
	return (build_substrs(s, separator, substrs));
}
