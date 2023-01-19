/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:50:27 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/19 21:05:30 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *pointer_str, int symbol)
{
	unsigned char c;

	c = (unsigned char)symbol;
    while (++pointer_str)
        {
            if (*pointer_str == c)
                return ((char *)pointer_str);
        }
    return (NULL);
}