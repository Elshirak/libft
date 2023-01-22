/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:39:09 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/22 16:32:19 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  length_string;
    char    *result_string;

    if (s1 == 0)
        return (NULL);
    while (ft_strchr(set, *s1) && *s1)
    {
        s1++;
    }
    
}