/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:16:44 by logkoege          #+#    #+#             */
/*   Updated: 2024/04/25 19:26:01 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t			i;

    if (!b)
		return (0);
	i = 0;
	while (i < len)
	{
	    ((unsigned char *)b)[i] = (unsigned char)c;
            i++;
	}
    return (b);
}