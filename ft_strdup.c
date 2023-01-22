/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:07:50 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/22 15:08:03 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *source_string)
{
	size_t	length_str;
	size_t	i;
	char	*result;
	
	length_str = ft_strlen(source_string) + 1;
	result = (char *) malloc(sizeof(char) * length_str);

	if (!result)
		return (NULL);
	while ( i++ < length_str)
		result[i] = source_string[i];
	result[i] = '\0';
	return (result);
}
