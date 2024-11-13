/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:36:43 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/11 16:20:15 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendest;

	lensrc = 0;
	lendest = 0;
	i = 0;
	if (!dst && size == 0)
		return (0);
	while (src[lensrc])
		lensrc++;
	while (dst[lendest] && lendest < size)
		lendest++;
	j = lendest;
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (lendest + lensrc);
}
// int main() {
//     char dest[20] = "\0";
//     const char *src = "";

//     size_t size = sizeof(dest);
//     size_t result = ft_strlcat(0, "", size);

//     printf("Resulting string: \"%s\"\n", dest);
//     printf("Length attempted to create: %zu\n", result);

//     return 0;
// }
// int main() {
//     char dest[20] = "Hello";
//     const char *src = "\tWorld\n";

//     size_t size = sizeof(dest);
//     size_t result = ft_strlcat(dest, src, size);

//     printf("Resulting string: \"%s\"\n", dest);  // Print destination string
//     printf("Length attempted to create: %zu\n", result);

//     // Test if special characters are present in dest
//     for (int i = 0; dest[i] != '\0'; i++) {
//         if (dest[i] == '\t') {
//             printf("Tab character found at index %d\n", i);
//         } else if (dest[i] == '\n') {
//             printf("Newline character found at index %d\n", i);
//         }
//     }

//     return 0;
// }