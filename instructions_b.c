/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2024/01/25 21:45:43 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	write(1, "pb\n", 3);
	p_mov(stack_a, stack_b);
}

void	sb(t_stack *stack_b)
{
	write(1, "sb\n", 3);
	s_mov(stack_b);
}

void	rb(t_stack *stack_b)
{
	write(1, "rb\n", 3);
	r_mov(stack_b);
}

void	rrb(t_stack *stack_b)
{
	write(1, "rrb", 3);
	write(1, "\n", 1);
	rr_mov(stack_b);
}
