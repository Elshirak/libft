/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:36:04 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/17 17:41:38 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char *dest_1;

    dest_1 = (unsigned char *)dest;
    if (!len || dest == src)
		return (dest);
    while (len-- > 0)
    {
        
    }
}