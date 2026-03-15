/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2026/03/15 20:17:10 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	string_is_a_number(char *strnum)
{
	int	i;

	i = 0;
	if (strnum[0] == '\0')
		return (0);
	if (strnum[i] == '-' || strnum[i] == '+')
	{
		i++;
		if (strnum[i] == '\0')
			return (0);
	}
	while (strnum[i] > '0' && strnum[i] < '9')
	{
		i++;
	}
	if ((strnum[i] < '0' || strnum[i] > '9') && strnum[i] != '\0')
	{
		return (0);
	}
	return (1);
}

int	max_range(char *num)
{
	long int	tmp;

	while (*num == '0' && *num + 1 != '\0')
		num++;
	if (ft_strlen(num) > 11)
		return (0);
	tmp = ft_atoi(num);
	if (tmp < INT_MIN || tmp > INT_MAX)
		return (0);
	return (1);
}

int	is_rep(t_stack *a, int compared)
{
	t_piece	*tmp;

	tmp = a->first;
	while (tmp->next)
	{
		if (tmp->value == compared)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
// char **repetition(char **rep, char *num, int num_elements)
// {
// 	static int count = 0;

// 	if(rep == NULL)
// 	{
// 		rep = malloc(sizeof(char  *) * (num_elements + 1));
// 		rep[num_elements] = NULL;
// 		rep[0] = NULL; 
// 	}
// 	int i;

// 	i = 0;
// 	while (rep[i] != NULL)
// 	{
// 		if (ft_strcmp_zero_advance(rep[i], num) == 0)
// 		{
// 			free(rep);
// 			return (NULL);
// 		}
// 		i++;
// 	}
// 	rep[count] = num;
// 	rep[count + 1] = NULL;
// 	count++;
// 	return (rep);
// }

int	is_correct_input(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!string_is_a_number(argv[i]))
			return (0);
		if (!max_range(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
