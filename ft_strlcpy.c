/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:08:04 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/07 17:03:43 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	if (i + 1 < size)
	{
		j = -1;
		while (++j < i + 1)
			dst[j] = src[j];
	}
	else if (size)
	{
		j = -1;
		while (++j < size - 1)
			dst[j] = src[j];
		dst[j] = '\0';
	}
	return (i);
}

// int main() {
//     char dest[20];
//     const char *src = "Hello, world!";

//     size_t size = sizeof(dest);
//     size_t result = ft_strlcpy(dest, src, size);

//     printf("Resulting string: \"%s\"\n", dest);
//     printf("Length of source string: %zu\n", result);

//     return 0;
// }

// int main()
// {
// 	char	str[] = "strlcpy";
// 	char	strDest[] = "";
// 	int	r = ft_strlcpy(strDest, str, 4);
// 	printf("%s\n", strDest);
//  	printf("%d", r);
// 	return (0);
// }
