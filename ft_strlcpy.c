/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:29 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/18 15:59:45 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		++counter;
	}
	while (counter < size)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (counter);
}
