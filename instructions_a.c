/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2024/01/25 21:45:43 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_b, t_stack *stack_a)
{
	write(1, "pa\n", 3);
	p_mov(stack_b, stack_a);
}

void	sa(t_stack *stack_a)
{
	write(1, "sa\n", 3);
	s_mov(stack_a);
}

void	ra(t_stack *stack_a)
{
	write(1, "ra\n", 3);
	r_mov(stack_a);
}

void	rra(t_stack *stack_a)
{
	write(1, "rra", 3);
	write(1, "\n", 1);
	rr_mov(stack_a);
}
