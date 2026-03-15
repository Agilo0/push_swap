/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2024/01/25 21:02:38 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Revisamos la si r o rr es el mas optimo
int	smart_rotate(t_stack *b, int index)
{
	int		i;
	t_piece	*tmp;

	i = 0;
	tmp = b->first;
	while (tmp)
	{
		if (tmp->index == index)
			break ;
		tmp = tmp->next;
		i++;
	}
	if (i < (b->len / 2))
		return (1);
	else
		return (2);
}

// Pone el valor mas grande del stack en primera position 
void	put_nbr_in_top_in_a(t_stack *b, int index)
{
	int	direction;

	direction = smart_rotate(b, index);
	while (b->first->index != index)
	{
		if (direction == 1)
			ra(b);
		else
			rra(b);
	}
}

// Pone el valor mas grande del stack en primera position 
void	put_nbr_in_top(t_stack *b, int index)
{
	int	direction;

	direction = smart_rotate(b, index);
	while (b->first->index != index)
	{
		if (direction == 1)
			rb(b);
		else
			rrb(b);
	}
}

// mas de 25 lignes
//Vamos moviendo por chunk segun indice (asignado segun valor de la pieza)
void	move_in_chunks(t_stack *a, t_stack *b, int num_chunks)
{
	int	max_chunk_index;
	int	chunk_size;
	int	i;

	i = 0;
	max_chunk_index = (a->len) / num_chunks;
	chunk_size = max_chunk_index;
	while (num_chunks > 0)
	{
		while (i < chunk_size)
		{
			if ((a->first->index <= max_chunk_index))
			{
				pb(a, b);
				i++;
			}
			else
				ra(a);
		}
		i = 0;
		max_chunk_index = max_chunk_index + chunk_size;
		num_chunks--;
	}
	while (a->len != 0)
		pb(a, b);
}
