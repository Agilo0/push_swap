/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2024/01/25 21:22:38 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_pieces(t_stack *stack)
{
	sa(stack);
}

// Revisamos que el nodo mas grande esta abajo, sino rotatemos, 
// Intercambiamos lo 2 otros si no estan ordenados

// 132
// 213
// 231
// 312
// 321
void	tree_pieces(t_stack *a)
{
	t_piece	*tmp;

	tmp = a->first;
	if (tmp->index == 1 && tmp->next->index == 3)
	{
		rra(a);
		sa(a);
	}
	else if (tmp->index == 2 && tmp->next->index == 1)
		sa(a);
	else if (tmp->index == 2 && tmp->next->index == 3)
		rra(a);
	else if (tmp->index == 3 && tmp->next->index == 1)
		ra(a);
	else if (tmp->index == 3 && tmp->next->index == 2)
	{
		sa(a);
		rra(a);
	}
}

void	four_pieces(t_stack *stack_a, t_stack *stack_b)
{
	put_nbr_in_top_in_a(stack_a, 1);
	pb(stack_a, stack_b);
	ft_index(stack_a);
	tree_pieces(stack_a);
	pa(stack_b, stack_a);
}

void	five_pieces(t_stack *stack_a, t_stack *stack_b)
{
	put_nbr_in_top_in_a(stack_a, 1);
	pb(stack_a, stack_b);
	put_nbr_in_top_in_a(stack_a, 2);
	pb(stack_a, stack_b);
	ft_index(stack_a);
	tree_pieces(stack_a);
	pa(stack_b, stack_a);
}

int	stack_is_ordered(t_stack *stack)
{
	t_piece	*tmp;

	tmp = stack->first;
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
		{
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}
