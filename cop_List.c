/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cop_List.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:37:29 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/29 14:39:10 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*copylist(t_list *head)
{
	t_list	*newnode;

	if (head == NULL)
		return (NULL);
	else
	{
		newnode = (t_list *)malloc(sizeof(t_list));
		if (!newnode)
			return (NULL);
		newnode->num = head->num;
		newnode->index = head->index;
		newnode->next = copylist(head->next);
		return (newnode);
	}
}
