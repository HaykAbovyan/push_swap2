/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:00 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:29:20 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_give_indexes(t_list **list_a, t_list *sorted, int count)
{
	t_list	*test_a;
	t_list	*test_s;
	int		i;
	int		j;

	test_s = sorted;
	test_a = *list_a;
	i = 0;
	while (i < count)
	{
		j = 0;
		test_a = *list_a;
		while (j < count)
		{
			if (test_s->num == test_a->num)
				test_a->index = i;
			test_a = test_a->next;
			j++;
		}
		test_s = test_s->next;
		i++;
	}
}

int	bit_counter(int count)
{
	int	res;
	int	max_num;

	max_num = count - 1;
	res = 0;
	while (max_num >> res != 0)
		res++;
	return (res);
}

void	ft_radix_sort(t_list **list_a, t_list **list_b, int count)
{
	t_list	*a_list;
	t_list	*b_list;
	int		count_of_bits;
	int		i;
	int		j;

	a_list = *list_a;
	b_list = *list_b;
	i = -1;
	count_of_bits = bit_counter(count);
	while (++i < count_of_bits)
	{
		j = -1;
		while (++j < count)
		{
			if ((a_list->index >> i) & 1)
				ft_ra(&a_list);
			else
				ft_pb(&a_list, &b_list);
		}
		while ((b_list))
			ft_pa(&a_list, &b_list);
	}
	*list_a = a_list;
}

void	sort_big_stack(t_list **list_a, t_list **list_b, int count)
{
	t_list	*sorted;

	sorted = ft_bubble_sort(*list_a, count);
	to_give_indexes(list_a, sorted, count);
	ft_radix_sort(list_a, list_b, count);
}
