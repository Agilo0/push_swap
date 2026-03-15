/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2024/01/25 21:45:43 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	write(1, "ss\n", 3);
	s_mov(stack_a);
	s_mov(stack_b);
}

void	rr(t_stack *stack_b, t_stack *stack_a)
{
	write(1, "rr\n", 3);
	r_mov(stack_b);
	r_mov(stack_a);
}

void	rrr(t_stack *stack_b, t_stack *stack_a)
{
	write(1, "rb\n", 3);
	rr_mov(stack_b);
	rr_mov(stack_a);
}
