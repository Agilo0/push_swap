/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:12:17 by alounici          #+#    #+#             */
/*   Updated: 2024/01/25 21:48:23 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_piece
{
	int				value;
	int				index;
	struct s_piece	*next;
}	t_piece;

typedef struct s_stack
{
	int		len;
	t_piece	*first;
}	t_stack;

int			string_is_a_number(char *strnum);
int			max_range(char *str);
int			is_correct_input(int argc, char **argv);
long int	ft_atoi(const char *str);
int			ft_strcmp(const char *str, const char *str2);
int			ft_strlen(char *str);
int			initial_fill_stack_a(t_stack *a, int argc, char **argv);
void		pb(t_stack *stack_a, t_stack *stack_b);
void		pa(t_stack *stack_b, t_stack *stack_a);
void		sa(t_stack *stack_a);
void		sb(t_stack *stack_b);
void		ra(t_stack *stack_a);
void		rb(t_stack *stack_b);
void		rr(t_stack *stack_b, t_stack *stack_a);
void		rra(t_stack *stack_a);
void		rrb(t_stack *stack_b);
void		rrr(t_stack *stack_b, t_stack *stack_a);
void		p_mov(t_stack *stack_src, t_stack *stack_dest);
void		s_mov(t_stack *stack);
void		rr_mov(t_stack *stack);
void		r_mov(t_stack *stack);
void		print_stack(t_stack *stack);
void		two_pieces(t_stack *stack);
void		tree_pieces(t_stack *a);
void		move_in_chunks(t_stack *a, t_stack *b, int num_chunks);
void		put_nbr_in_top(t_stack *b, int index);
int			smart_rotate(t_stack *b, int index);
void		free_stack(t_stack *stack);
void		push_swap(t_stack *stack_a, t_stack *stack_b);
int			stack_is_ordered(t_stack *stack);
void		assign_index(t_piece *to_compare, t_stack *stack);
void		ft_index(t_stack *stack);
int			ft_strcmp_zero_advance(char *str, char *str2);
void		four_pieces(t_stack *stack_a, t_stack *stack_b);
void		five_pieces(t_stack *stack_a, t_stack *stack_b);
int			is_rep(t_stack *a, int compared);
void		print_stack_indexes(t_stack *stack);
void		put_nbr_in_top_in_a(t_stack *b, int index);

#endif
