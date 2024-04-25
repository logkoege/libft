/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:25:19 by logkoege          #+#    #+#             */
/*   Updated: 2024/04/25 17:51:34 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;
	i = 0;

	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}