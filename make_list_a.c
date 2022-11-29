/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:43:39 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:45:55 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	only_num(int ac, char **av)
{
	int	j;
	int	i;

	i = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			if (!((av[i][j] >= '0' && av[i][j] <= '9') ||
			(av[i][j] == '-' || av[i][j] == '+' || av[i][j] <= 32)))
				return (1);
		}
	}
	return (0);
}

t_list	*make_list_a(int ac, char **av)
{
	t_list	*list;
	int		i;
	int		j;
	int		found;

	found = 0;
	list = NULL;
	i = 0;
	while (++i < ac)
	{
		j = -1;
		found = 0;
		while (av[i][++j])
		{
			if (found == 0 && ((av[i][j] >= '0' && av[i][j] <= '9') ||
			(av[i][j] == '-' || av[i][j] == '+')))
			{
				found = 1;
				ft_lstadd_back(&list, ft_lstnew(ft_atoi(&av[i][j])));
			}
			else if (av[i][j] == ' ')
				found = 0;
		}
	}
	return (list);
}
