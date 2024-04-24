/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:37:19 by logkoege          #+#    #+#             */
/*   Updated: 2024/04/24 12:37:22 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		S1;
	size_t		S2;

	i = 0;
	S1 = ft_strlen(dst);
	S2 = ft_strlen(src);
	if (size - 1 <= S1)
		return (S2 + size);
    while (S1 + i < size - 1)
	{
		dst[S1 + i] = src[i];
		i++;
	}
	dst[S1 + i] = '\0';
	return (S1 + S2);
}