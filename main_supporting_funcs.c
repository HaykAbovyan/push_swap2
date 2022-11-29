/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_supporting_funcs.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:39:59 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/29 14:36:22 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_count(t_list *head)
{
	int		count;
	t_list	*current_node;

	count = 0;
	current_node = head;
	while (current_node)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}

int	a_is_sorted(t_list *temp)
{
	if (temp && temp->next)
	{
		while (temp && temp->next)
		{
			if (temp->num > temp->next->num)
				return (0);
			temp = temp->next;
		}
	}
	return (1);
}

int	duplicate_check(t_list *list)
{
	t_list	*first;
	t_list	*second;

	first = list;
	while (first)
	{
		second = first->next;
		while (second)
		{
			if (first->num == second->num)
				return (1);
			second = second ->next;
		}
		first = first -> next;
	}
	return (0);
}

int	only_int(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp)
	{
		if (tmp->num > INT_MAX || tmp->num < INT_MIN)
			return (1);
		tmp = tmp -> next;
	}
	return (0);
}

int	sign_check(int ac, char **av)
{
	int	j;
	int	i;

	i = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if ((av[i][j + 1] <= '0' || av[i][j - 1] >= '9')
				|| (av[i][j - 1] >= '0' && av[i][j - 1] <= '9'))
					return (1);
			}
		}
	}
	return (0);
}
