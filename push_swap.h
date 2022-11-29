/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <habovyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:46:11 by habovyan          #+#    #+#             */
/*   Updated: 2022/11/29 14:32:59 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <limits.h>

typedef struct s_list
{
	long			num;
	int				index;
	int				counter;
	struct s_list	*next;
}				t_list;

long	ft_atoi(char *str);
void	sort_more_num(t_list **list_a, t_list **list_b);
void	sort_5_num(t_list **list_a, t_list **list_b);
void	sort_three_num(t_list **list_a);
int		only_num(int ac, char **av);
void	ft_radix_sort(t_list **list_a, t_list **list_b, int count);
int		a_is_sorted(t_list *list);
t_list	*ft_bubble_sort(t_list *list, int count);
void	ft_swap_lists(t_list **list);
int		duplicate_check(t_list *list);
int		only_int(t_list *list);
void	give_indexes(t_list **list_a);
int		min_num(t_list *list);
void	to_give_indexes(t_list **list_a, t_list *sorted, int count);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		num_count(t_list *list);
t_list	*ft_lstnew(long num);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*make_list_a(int ac, char **av);
void	ft_sa(t_list **list_a);
void	ft_sb(t_list **list_a);
void	ft_ss(t_list **list_a, t_list **list_b);
void	print(t_list *head);
void	ft_ra(t_list **list_a);
t_list	*ftft_lstlast(t_list **list);
void	ft_rb(t_list **list_a);
void	ft_rr(t_list **list_a, t_list **list_b);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_rra(t_list **list_a);
void	ft_rrb(t_list **list_a);
void	ft_rrr(t_list **list_a, t_list **list_b);
void	ft_pb(t_list **list_a, t_list **list_b);
void	ft_pa(t_list **list_a, t_list **list_b);
void	sort_three_num(t_list **list_a);
void	sort_small_stack(t_list **list_a, t_list **list_b, int count);
void	first_case(t_list **list);
int		sign_check(int ac, char **av);
void	second_case(t_list **list);
void	third_case(t_list **list);
void	fourth_case(t_list **list);
void	fifth_case(t_list **list);
t_list	*ft_bubble_sort(t_list *list, int count);
t_list	*copylist(t_list *head);
void	print_index(t_list *head);
void	sort_big_stack(t_list **list_a, t_list **list_b, int count);
void	to_give_indexes(t_list **list_a, t_list *sorted, int count);
#endif