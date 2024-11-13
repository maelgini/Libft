/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:18:50 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/11 17:40:18 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*clean;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	clean = ft_substr(s1, start, end - start + 1);
	return (clean);
}

// int    main(void)
// {
//     char    *str = "hello world";
//     printf("%s", ft_strtrim(str, "eo"));
//     return (0);
// }
