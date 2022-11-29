/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:24:02 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:24:09 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ftft_lstlast(t_list **list)
{
	t_list	*lst;

	lst = *list;
	if (lst)
	{
		while (lst ->next->next)
			lst = lst ->next;
	}
	return (lst);
}

void	reverse_rotate(t_list **list_a)
{
	t_list	*last;
	t_list	*next_to_last;

	last = NULL;
	next_to_last = NULL;
	if ((*list_a) && (*list_a)->next)
	{
		last = ft_lstlast(*list_a);
		next_to_last = ftft_lstlast(list_a);
		last -> next = *list_a;
		next_to_last -> next = NULL;
		*list_a = last;
	}
}

void	ft_rra(t_list **list_a)
{
	reverse_rotate(list_a);
	write (1, "rra\n", 4);
}

void	ft_rrb(t_list **list_a)
{
	reverse_rotate(list_a);
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_list **list_a, t_list **list_b)
{
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	write (1, "rrr\n", 4);
}
