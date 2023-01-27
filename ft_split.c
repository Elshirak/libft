/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:23:07 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/27 15:21:26 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_cnt_wd_ini_ar(char const *string_in, char symb_sep, size_t count_w)
{
	char	**array_strings;
	size_t	iter;

	iter = 0;
	if (!string_in)
		return (NULL);
	while (string_in[iter] && string_in[iter] == symb_sep)
		iter++;
	while (string_in[iter])
	{
		if (string_in[iter] == symb_sep)
		{
			++count_w;
			while (string_in[iter] && string_in[iter] == symb_sep)
				++iter;
			continue ;
		}
		++iter;
	}
	if (string_in[iter - 1] != symb_sep)
		++count_w;
	array_strings = malloc((count_w + 1) * sizeof (char *));
	if (!array_strings)
		return (NULL);
	return (array_strings);
}

size_t	ft_word_end_index(const char *str, char separator, size_t itera)
{
	while (*(str + itera) && *(str + itera) != separator)
		++itera;
	return (itera);
}

char	**fil_ar(char **ptr_arr, const char *string_in, char symb_sep, size_t j)
{
	size_t	itera;

	itera = 0;
	while (*(string_in + itera))
	{
		while (*(string_in + itera) && *(string_in + itera) == symb_sep)
			++itera;
		if (*(string_in + itera))
		{
			*(ptr_arr + j) = ft_substr(string_in, itera, \
				ft_word_end_index((string_in + itera), symb_sep, 0));
			if (!*(ptr_arr + j))
			{
				free(ptr_arr);
				return (NULL);
			}
			++j;
		}
		while (*(string_in + itera) && *(string_in + itera) != symb_sep)
			++itera;
	}
	*(ptr_arr + j) = 0;
	return (ptr_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_arr;

	ptr_arr = ft_cnt_wd_ini_ar(s, c, 0);
	if (!ptr_arr)
		return (NULL);
	ptr_arr = fil_ar(ptr_arr, s, c, 0);
	if (!ptr_arr)
		return (NULL);
	return (ptr_arr);
}
