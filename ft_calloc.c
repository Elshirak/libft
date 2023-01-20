/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:30:21 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/20 14:40:19 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t number_of_elements, size_t size_of_element)
{
    void    *ptr;
    
    ptr = malloc(number_of_elements * size_of_element);
    if (!ptr)
        return(NULL);
    ft_memset(ptr, 0, number_of_elements * size_of_element);
    return (ptr);
}