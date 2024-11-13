/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:33 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/11 16:42:17 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == (char)c)
			return ((char *)&str[len]);
		len--;
	}
	if (str[len] == (char)c)
		return ((char *)&str[len]);
	return (NULL);
}

// int main() {
//     const char *str = "Hello, world!";
//     char *result = ft_strrchr(str, 'o');

//     if (result) {
//         printf("Last occurrence of 'o': %s\n", result);
//     } else {
//         printf("'o' not found in the string.\n");
//     }

//     return 0;
// }