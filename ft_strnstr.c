/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:13:11 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/11 15:58:07 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (little[j] && big[i + j] == little[j] && (i + j) < len)
				j++;
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

// int	main()
// {
// 	const char *b = "hello world";
// 	const char *l = "world";
// 	printf("%s\n", ft_strnstr(b, l, 11));
// 	printf("%s", strnstr(b, l, 11));
// 	return (0);
// }