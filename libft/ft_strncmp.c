/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:28:10 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/28 18:28:19 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	*smek;
	unsigned char	*serku;

	smek = (unsigned char *)s1;
	serku = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (smek[i] && serku[i] && n - 1 > i && smek[i] == serku[i])
		i++;
	return (smek[i] - serku[i]);
}
