/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:50:27 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/23 21:08:45 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	if (str[i] == (unsigned char)ch)
		return ((char *)&str[i]);
	while (str[i] != 0)
	{
		if (str[i + 1] == (unsigned char)ch)
			return ((char *)&str[i + 1]);
		i++;
	}
	return (NULL);
}
*/

	if (*pointer == '\0' && c == '\0')
	{
		return (pointer);
	}



char    *ft_strchr(const char *pointer_str, int symbol)
{
	unsigned char c;
    size_t  iterator;

    iterator = 0;
	c = (unsigned char)symbol;
    while (pointer_str[iterator] != 0) 
    {
        if (pointer_str[iterator] == c)
            return ((char *)&pointer_str[iterator]);
        iterator++;
    }
	if (pointer_str[iterator] == '\0' && c == '\0')
		return (pointer_str[iterator]);
    return (NULL);
}


/*	signal(SIGSEGV, sigsegv);
	title("ft_strchr\t: ")
	char s[] = "tripouille";
	check(ft_strchr(s, 't') == s); showLeaks(); 

	check(ft_strchr(s, 'z') == 0); showLeaks();

	check(ft_strchr(s, 't' + 256) == s); showLeaks();
	write(1, "\n", 1);
*/ 
