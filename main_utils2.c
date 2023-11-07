/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:34:38 by tanota            #+#    #+#             */
/*   Updated: 2023/08/24 14:37:53 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ismaxint(char *s)
{
	int		i;
	int		j;
	char	*cmp;

	cmp = "-2147483647";
	i = 0;
	j = 0;
	if (ft_strlen(s) > 11)
		return (1);
	else if (ft_strlen(s) < 10 || ft_strncmp(s, "-2147483648", 11) == 0
		|| (s[0] == '-' && ft_strlen(s) == 10))
		return (0);
	if (s[0] != '-')
		j = 1;
	while (s[i] != '\0')
	{
		if (s[i] > cmp[j])
			return (1);
		j++;
		i++;
	}
	return (0);
}
