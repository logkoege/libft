/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:05:02 by logkoege          #+#    #+#             */
/*   Updated: 2024/04/29 22:41:13 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s01;
	unsigned char	*s02;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s01 != *s02)
			return (*s01 - *s02);
		s01++;
		s02++;
		n--;
	}
	return (0);
}
