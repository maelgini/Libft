/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:11:41 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/11 15:36:40 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*srccc;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dest = (char *)dst;
	srccc = (const char *)src;
	while (n--)
		dest[n] = srccc[n];
	return (dst);
}

// int	main(int ac, char **av)
// {
// 	printf("%s\n", ft_memcpy(av[1],av[2], atoi(av[3])));
// 	printf("%s", memcpy(av[1], av[2], atoi(av[3])));
// }