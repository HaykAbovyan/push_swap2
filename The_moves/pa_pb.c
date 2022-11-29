/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:18:07 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:26:28 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **list_b, t_list **list_a)
{
	t_list	*temp;

	temp = NULL;
	if ((*list_a) && !((*list_a)->next))
	{
		(*list_a)->next = *list_b;
		*list_b = *list_a;
		*list_a = NULL;
		write(1, "pa\n", 3);
	}
	else if ((*list_a))
	{
		temp = (*list_a)->next;
		(*list_a)->next = NULL;
		ft_lstadd_front(list_b, *list_a);
		*list_a = temp;
		write(1, "pa\n", 3);
	}
}

void	ft_pb(t_list **list_b, t_list **list_a)
{
	t_list	*temp;

	temp = NULL;
	if ((*list_b) && !((*list_b)->next))
	{
		(*list_b)->next = *list_a;
		*list_a = *list_b;
		*list_b = NULL;
		write(1, "pb\n", 3);
	}
	else if ((*list_b))
	{
		temp = (*list_b)->next;
		(*list_b)-> next = NULL;
		ft_lstadd_front(list_a, *list_b);
		*list_b = temp;
		write(1, "pb\n", 3);
	}
}
