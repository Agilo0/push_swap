/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2026/03/15 20:26:40 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_piece	*tmp;

	tmp = stack->first;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

void	print_stack_indexes(t_stack *stack)
{
	t_piece	*tmp;

	tmp = stack->first;
	while (tmp)
	{
		printf("%d\n", tmp->index);
		tmp = tmp->next;
	}
}

//push_swap plus de 25 lignes
void	push_swap(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_is_ordered(stack_a))
	{
		if (stack_a->len == 2)
			two_pieces(stack_a);
		if (stack_a->len == 3)
			tree_pieces(stack_a);
		if (stack_a->len == 4)
			four_pieces(stack_a, stack_b);
		if (stack_a->len == 5)
			five_pieces(stack_a, stack_b);
		if (stack_a->len > 5)
		{
			if (stack_a->len <= 100)
				move_in_chunks(stack_a, stack_b, 4);
			else if (stack_a->len <= 500)
				move_in_chunks(stack_a, stack_b, 8);
			else
				move_in_chunks(stack_a, stack_b, 12);
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	stack_a.first = NULL;
	stack_a.len = 0;


	stack_b.first = NULL;
	stack_b.len = 0;

	if (argc < 2)
		return (0);
	if (!is_correct_input(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (initial_fill_stack_a(&stack_a, argc, argv) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	ft_index(&stack_a);
	push_swap(&stack_a, &stack_b);
	ft_index(&stack_b);
	while (stack_b.len)
	{
		put_nbr_in_top(&stack_b, stack_b.len);
		pa(&stack_b, &stack_a);
	}
	free_stack(&stack_a);
	return (0);
}
