/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:44:06 by logkoege          #+#    #+#             */
/*   Updated: 2024/05/04 20:43:54 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fat(const char *s1, const char *set, int h, int j)
{
	int		i;
	char	*str;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1[j])
		{
			j--;
			i = 0;
		}
		else
			i++;
	}
	str = malloc(sizeof(char) * ((j + 1) - h) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (h <= j)
		str[i++] = s1[h++];
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	h;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	h = 0;
	i = 0;
	j = ft_strlen(s1) - 1;
	while (set[i])
	{
		if (set[i] == s1[h])
		{
			h++;
			i = 0;
		}
		else
			i++;
	}
	if (h == ft_strlen(s1))
		return (ft_strdup(""));
	return (ft_fat(s1, set, h, j));
}
