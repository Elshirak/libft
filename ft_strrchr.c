/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:23:28 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/23 21:21:09 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int symb)
{
    char    *start;
    
    start = (char *)s;
    while (*s)
    {
        while (--s != start && *s != (char)symb)
        {
            if (*s == (char)symb)
                return ((char *)s);
            s--;
        }
        s++;
    }
    return (NULL);
}