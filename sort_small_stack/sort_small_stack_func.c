/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack_func.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:17:58 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/29 14:34:59 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	to_check_biggest(t_list *list)
{
	t_list	*tmp;
	int		num;

	tmp = list->next;
	num = list->index;
	while (tmp)
	{
		if (num < tmp->index)
			return (1);
		tmp = tmp -> next;
	}
	return (0);
}

int	min_num(t_list *list)
{
	int	res;
	int	i;

	res = INT_MAX;
	i = 0;
	while (list)
	{
		if (list->num < res)
		{
			res = list->num;
			i = list->counter;
		}
		list = list ->next;
	}
	return (i);
}

void	sort_more_num(t_list **list_a, t_list **list_b)
{
	int	counter;

	give_indexes(list_a);
	counter = min_num(*list_a);
	if (counter == 1)
		ft_sa(list_a);
	else if (counter == 2)
	{
		ft_ra(list_a);
		ft_ra(list_a);
	}
	else if (counter == 3)
		ft_rra(list_a);
	ft_pb(list_a, list_b);
	sort_three_num(list_a);
	ft_pa(list_a, list_b);
}

void	sort_5_num(t_list **list_a, t_list **list_b)
{
	int	counter;

	give_indexes(list_a);
	counter = min_num(*list_a);
	if (counter == 1)
		ft_sa(list_a);
	else if (counter == 2)
	{
		ft_ra(list_a);
		ft_ra(list_a);
	}
	else if (counter == 3)
	{
		ft_rra(list_a);
		ft_rra(list_a);
	}
	else if (counter == 4)
		ft_rra(list_a);
	ft_pb(list_a, list_b);
	sort_more_num(list_a, list_b);
	ft_pa(list_a, list_b);
}
