/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithim.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:28 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/29 14:39:48 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_lists(t_list **list)
{
	int		tmp;
	t_list	*test;

	test = *list;
	tmp = test->num;
	test->num = test->next->num;
	test->next->num = tmp;
	*list = test;
}

t_list	*ft_bubble_sort(t_list *list, int count)
{
	t_list	*test;
	t_list	*lst;
	int		i;
	int		j;

	i = 0;
	lst = copylist(list);
	test = lst;
	while ((i < count - 1))
	{
		j = 0;
		test = lst;
		while (j < count - i - 1)
		{
			if (test->num > test->next->num)
				ft_swap_lists(&test);
			j++;
			test = test -> next;
		}
		i++;
	}
	free(lst);
	return (lst);
}
