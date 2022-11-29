/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:19:21 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:26:35 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **list_a)
{
	t_list	*tmp;

	tmp = NULL;
	if (list_a && (*list_a)->next)
	{	
		tmp = (*list_a)->next;
		if (!tmp->next)
		{
			ft_sa(list_a);
			return ;
		}
		(*list_a)->next = NULL;
		ft_lstlast(tmp)->next = *list_a;
		*list_a = tmp;
	}
}

void	ft_ra(t_list **list_a)
{
	rotate(list_a);
	write (1, "ra\n", 3);
}

void	ft_rb(t_list **list_a)
{
	rotate(list_a);
	write (1, "rb\n", 3);
}

void	ft_rr(t_list **list_a, t_list **list_b)
{
	rotate(list_a);
	rotate(list_b);
	write (1, "rr\n", 3);
}
