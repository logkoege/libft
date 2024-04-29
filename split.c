/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:26:10 by logkoege          #+#    #+#             */
/*   Updated: 2024/04/29 12:41:04 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  size_t  ft_nbmot(char const *str, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    if (!str)
        return (0);
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i])
            count++;
        while (str[i] != c && str[i])
            i++;
    }
    return (count);
}

char    **ft_split(char const *str, char c)
{
    char    **tab;
    size_t  i;
    size_t  len;

    i = 0;
    tab = (char **)malloc(sizeof(char *) *(ft_nbmot(str, c) + 1));
    if (!tab || !str)
        return (0);
    while (str)
    {
        while (str == c && str)
            str++;
        if (str)
        {
            if (!ft_strchr(str, c))
                len = ft_strlen(str);
            else
                len = ft_strchr(str, c) - str;
            tab[i++] = ft_substr(str, 0, len);
            str = str + len;
        }
    }
    tab[i] = 0;
    return (tab);
}

