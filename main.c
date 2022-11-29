/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:41:51 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:43:00 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_list *head)
{
	t_list	*current_node;

	current_node = head;
	if (!(current_node))
		printf("NULL");
	while (current_node)
	{
		printf("%ld ", current_node->num);
		current_node = current_node->next;
	}
}

int	error_check(int ac, char **as, t_list *list_a)
{
	if (only_num(ac, as) || duplicate_check(list_a)
		|| only_int(list_a) || sign_check(ac, as))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	main(int ac, char **as)
{
	t_list	*list_a;
	t_list	*list_b;
	int		count;

	list_b = NULL;
	list_a = NULL;
	if (ac > 1)
	{
		list_a = make_list_a(ac, as);
		count = num_count(list_a);
		if (error_check(ac, as, list_a))
			return (0);
		if (a_is_sorted(list_a))
			return (0);
		if (count <= 5)
			sort_small_stack(&list_a, &list_b, count);
		else
			sort_big_stack(&list_a, &list_b, count);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
