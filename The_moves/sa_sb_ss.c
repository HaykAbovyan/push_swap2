/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:24:31 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:27:04 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **list_a)
{
	t_list	*temp;

	temp = NULL;
	if (list_a && (*list_a)->next)
	{
		temp = (*list_a)->next;
		if (temp->next)
			(*list_a)->next = temp->next;
		else
			(*list_a)->next = NULL;
		temp->next = *list_a;
		*list_a = temp;
	}
}

void	ft_sa(t_list **list_a)
{
	swap(list_a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_list **list_a)
{
	swap(list_a);
	write (1, "sb\n", 3);
}

void	ft_ss(t_list **list_a, t_list **list_b)
{
	swap(list_a);
	swap(list_b);
	write(1, "ss \n", 3);
}
