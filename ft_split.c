/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:23:07 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/26 19:30:30 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strlen.c"
#include <stdio.h>

char  **ft_get_words__init_array(char const *string_in, char symb_sep, size_t count_w, size_t iter)
{
    char    **array_strings;
    
    if (!string_in)
        return (NULL);
	while (string_in[iter] && string_in[iter] == symb_sep)
		iter++;   
    while (string_in[iter])
    {
        if (string_in[iter] == symb_sep)
        {
            ++count_w;
            while (string_in[iter] && string_in[iter] == symb_sep)
                ++iter;
            continue ;
        }
        ++iter; 
    }
	if (string_in[iter - 1] != symb_sep)
	 	++count_w;
    array_strings = malloc((count_w + 1) * sizeof (char *));
    if (!array_strings)
        return (NULL);
    array_strings[count_w] = '\0';
    return (array_strings);
}


char **ft_parse_str__fill_array(char **ptr_arr, char *string_in, char symb_sep, size_t itera, size_t i)
{
    while (string_in[itera] && string_in[itera] == symb_sep)
		itera++;   
}

char    **ft_split(char const *s, char c)
{
    char **ptr_arr;
    
    ptr_arr = ft_get_words__init_array(s, c, 0, 0);
    if (!ptr_arr)
        return (NULL);
    
    
}


int main(void)
{
    char n = ' ';
    printf("%ld", ft_get_words_number("    asdf1234 add   2222", ' ', 0, 0));
}