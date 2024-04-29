/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:34:49 by logkoege          #+#    #+#             */
/*   Updated: 2024/04/26 16:35:47 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nombre;
	int	signe;

	signe = 1;
	nombre = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i] && (str[i] <= '9' && str[i] >= '0'))
	{
		nombre = nombre * 10 + (str[i] - '0');
		i++;
	}
	return (nombre * signe);
}
