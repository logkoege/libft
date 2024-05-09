/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:23:42 by logkoege          #+#    #+#             */
/*   Updated: 2024/05/05 14:03:05 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_nbrlen(int n)
{
	int	len;

	len = 1;
	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	char	*result;

	len = ft_nbrlen(n);
	is_negative = (n < 0);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[--len] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		result[0] = '-';
	return (result);
}
