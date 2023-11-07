/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:34:38 by tanota            #+#    #+#             */
/*   Updated: 2023/08/24 17:30:22 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = ftt_lstsize(*stack_a);
	if (len <= 1 || issorted(stack_a))
		return ;
	else if (len == 2)
		sa(stack_a);
	else if (len == 3)
		sort_3(stack_a);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
	else
		ft_radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!check_av(ac, &av))
	{
		if (ac == 2)
		{
			ftt_free_av(av);
			free(av);
		}
		return (0);
	}
	if (ac < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	put_value_in(&stack_a, av, ac);
	sort(&stack_a, &stack_b);
	if (ac == 2)
	{
		ftt_free_av(av);
		free(av);
	}
	ftt_lstclear(&stack_a);
	return (0);
}
