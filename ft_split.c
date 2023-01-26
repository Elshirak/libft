/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:23:07 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/26 17:42:32 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strlen.c"
#include <stdio.h>

size_t  ft_get_words_number(char const *string_in, char symb_sep, size_t count_w, size_t iter)
{
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
    return (count_w);
}


// char    **ft_split(char const *s, char c)
// {
//     ft_get_words_number(s, c);
// }


int main(void)
{
    char n = ' ';
    printf("%ld", ft_get_words_number("    asdfa     24g  !@       1234 add   2222", ' ', 0, 0));
}