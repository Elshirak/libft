/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:38:20 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/25 13:22:49 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result_string;
    size_t iterator;
    
    if (!s || !f)
        return (NULL);
    result_string = ft_strdup(s);
    if (!result_string)
        return (NULL);
    iterator = 0;
    while (result_string[iterator])
    {
        result_string[iterator] = (*f)(iterator, s[iterator]);
        iterator++;
    }
    
        
}