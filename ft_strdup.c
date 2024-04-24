/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:37:02 by logkoege          #+#    #+#             */
/*   Updated: 2024/04/24 12:37:06 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_strdup(const char *s1)
{
    char    *s2;
    size_t  i;

    i = 0;
    s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (s2[i])
        return(NULL);
    
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}