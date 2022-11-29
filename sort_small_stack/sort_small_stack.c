/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:33:32 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:35:25 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_num(t_list **list_a)
{
	if ((*list_a)->num > (*list_a)->next->num
		&& (*list_a)->next->num < (*list_a)->next->next->num
		&& (*list_a)->num < (*list_a)->next->next->num)
		first_case(list_a);
	else if ((*list_a)->num > (*list_a)->next->num
		&& (*list_a)->next->num > (*list_a)->next->next->num)
		second_case(list_a);
	else if ((*list_a)->num > (*list_a)->next -> num
		&& (*list_a)->next->num < (*list_a)->next->next->num)
		third_case(list_a);
	else if ((*list_a)->num < (*list_a)->next -> num
		&& (*list_a)->next->num > (*list_a)->next->next->num
		&& (*list_a)->next->next->num > (*list_a)->num)
		fourth_case(list_a);
	else if ((*list_a)->num < (*list_a)->next->num
		&& (*list_a)->next->num > (*list_a)->next->next->num)
		fifth_case(list_a);
}

void	give_indexes(t_list **list_a)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *list_a;
	while (tmp)
	{
		tmp->counter = i;
		i++;
		tmp = tmp->next;
	}
}

void	sort_small_stack(t_list **list_a, t_list **list_b, int count)
{
	if (count == 1)
		return ;
	else if (count == 2)
	{
		if ((*list_a)->num > (*list_a)->next->num)
			ft_sa(list_a);
	}
	else if (count == 3)
		sort_three_num(list_a);
	else if (count == 4)
		sort_more_num(list_a, list_b);
	else
		sort_5_num(list_a, list_b);
}
