/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:59:10 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/25 19:01:24 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst -> next)
        lst = lst -> next;
    return (lst);
}