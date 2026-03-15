/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2024/01/25 21:27:14 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_mov(t_stack *stack_src, t_stack *stack_dest)
{
	t_piece	*tmp;

	if (!stack_src->first)
		return ;
	tmp = stack_src->first;
	stack_src->first = tmp->next;
	tmp->next = stack_dest->first;
	stack_dest->first = tmp;
	stack_src->len = stack_src->len - 1;
	stack_dest->len = stack_dest->len + 1;
}

void	s_mov(t_stack *stack)
{
	t_piece	*tmp;
	t_piece	*tmp2;

	tmp = stack->first;
	tmp2 = stack->first;
	tmp = tmp->next;
	stack->first = tmp;
	tmp2->next = tmp->next;
	tmp->next = tmp2;
}

void	r_mov(t_stack *stack)
{
	t_piece	*tmp;
	t_piece	*tmp2;

	tmp = stack->first;
	tmp2 = stack->first;
	while (tmp2->next != NULL)
	{
		tmp2 = tmp2->next;
	}
	stack->first = tmp->next;
	tmp2->next = tmp;
	tmp->next = NULL;
}

void	rr_mov(t_stack *stack)
{
	t_piece	*tmp;
	t_piece	*tmp2;
	t_piece	*tmp3;
	int		i;

	i = 0;
	tmp = stack->first;
	tmp2 = stack->first;
	tmp3 = stack->first;
	while (i < stack->len - 2)
	{
		tmp2 = tmp2->next;
		i++;
	}
	while (tmp3->next != NULL)
		tmp3 = tmp3->next;
	stack->first = tmp3;
	tmp3->next = tmp;
	tmp2->next = NULL;
}
