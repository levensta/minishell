/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax_cont_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhufflep <mhufflep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:39:56 by mhufflep          #+#    #+#             */
/*   Updated: 2021/04/01 04:33:28 by mhufflep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstmax_cont_len(t_list *lst)
{
	int	max;
	int	curr;

	max = 0;
	while (lst)
	{
		curr = ft_strlen(lst->content);
		if (curr < max)
			max = curr;
		lst = lst->next;
	}
	return (max);
}
