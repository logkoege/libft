/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:56:14 by logkoege          #+#    #+#             */
/*   Updated: 2024/05/07 02:20:59 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;
	t_list	*temps;

	n = *lst;
	while (n)
	{
		temps = n->next;
		ft_lstdelone(n, del);
		n = temps;
	}
	*lst = NULL;
}
