/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:25:14 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/22 15:37:27 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  string_size;
    char    *ptr_to_result_string;
    size_t  iterator;
    
    string_size = ft_strlen(&s[start]);
    if (string_size >= len)
        string_size = len;
    
    ptr_to_result_string = (char *) malloc(string_size * sizeof (char));
    if (!ptr_to_result_string)
        return (NULL);
    
    iterator = 0;
    while (iterator != string_size)
    {
        ptr_to_result_string[iterator] = s[iterator + start];
        iterator++;
    }
    ptr_to_result_string[iterator] = '\0';
    return (ptr_to_result_string);
}