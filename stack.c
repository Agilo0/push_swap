/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2026/03/15 20:20:58 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_aux(t_stack *a, t_piece *tmp, char *argv)
{
	a->first = tmp;
	tmp->next = NULL;
	tmp->value = ft_atoi(argv);
}

// plus de 25 lignes
int	initial_fill_stack_a(t_stack *a, int argc, char **argv)
{
	t_piece	*tmp;
	t_piece	*tmp2;
	int		i;

	i = 1;
	tmp = malloc(sizeof(t_piece));
	if (!tmp)
		return (0);
	fill_aux(a, tmp, argv[i]);
	i++;
	while (i < argc)
	{
		tmp2 = malloc(sizeof(t_piece));
		if (!tmp2)
			return (0);
		tmp2->value = ft_atoi(argv[i]);
		tmp2->next = NULL;
		i++;
		tmp->next = tmp2;
		tmp = tmp2;
		if (is_rep(a, tmp->value) == 0)
			return (0);
	}
	a->len = argc -1;
	return (1);
}

void	assign_index(t_piece *to_compare, t_stack *stack)
{
	int		i;
	int		compared_value;
	t_piece	*tmp;

	i = 0;
	tmp = stack->first;
	compared_value = to_compare->value;
	while (tmp)
	{
		if (compared_value >= tmp->value)
			i++;
		tmp = tmp->next;
	}
	to_compare->index = i;
}

void	ft_index(t_stack *stack)
{
	t_piece	*tmp;

	tmp = stack->first;
	while (tmp)
	{
		assign_index(tmp, stack);
		tmp = tmp->next;
	}
}
