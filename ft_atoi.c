/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:57:55 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/09 16:37:51 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	n = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
			n = n * 10 + *nptr - '0';
			nptr++;
	}
	return (n * sign);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	printf("%d\n", atoi(av[1]));
// 	printf("%d", ft_atoi(av[1]));
// 	return (0);
// }
