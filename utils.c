/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alounici <alounici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 14:01:40 by alounici          #+#    #+#             */
/*   Updated: 2024/01/21 18:24:21 by alounici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(const char *str, const char *str2)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)str2[i])
			i++;
		else
			return ((unsigned char)str[i] - (unsigned char)str2[i]);
	}
	return ((unsigned char)str[i] - (unsigned char)str2[i]);
}

// int	ft_strcmp_zero_advance(char *str, char *str2)
// {
// 	int	i;

// 	if (*str == '-' && *str2 == '-')
// 	{
// 		str++;
// 		str2++;
// 	}
// 	if (*str == '+' && *str2 != '-')
// 	{
// 		str++;
// 		str2++;
// 	}
// 	if (*str != '-' && *str2 == '+')
// 	{
// 		str++;
// 		str2++;
// 	}
// 	while(*str && *str == '0' && *(str + 1) != '\0')
// 		str++;
// 	while(*str2 && *str2 == '0' && *(str2 + 1) != '\0')
// 		str2++;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if ((unsigned char)str[i] == (unsigned char)str2[i])
// 			i++;
// 		else
// 			return ((unsigned char)str[i] - (unsigned char)str2[i]);
// 	}
// 	return ((unsigned char)str[i] - (unsigned char)str2[i]);
// }

int	ft_is_digit(char c)
{
	return (c <= '9' && c >= '0');
}

long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg = -1;
		i++;
	}
	while (ft_is_digit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}

void	free_stack(t_stack *stack)
{
	t_piece	*tmp;
	t_piece	*tmp2;

	tmp = stack->first;
	tmp2 = stack->first;
	while (tmp)
	{
		tmp = tmp->next;
		free(tmp2);
		tmp2 = tmp;
	}
}
