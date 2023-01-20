/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 02:01:13 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/20 14:23:51 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t len_needle;

    len_needle = ft_strlen(needle);
    if (!len_needle)
        return ((char *)(haystack));
    while (len >= len_needle)
    {
        len--;
        if (!ft_memcmp(haystack, needle, len_needle))
            return ((char *)(haystack));
        haystack++;
    }
    return (NULL);
}