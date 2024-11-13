/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:11:13 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/11 16:43:37 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	while (*string)
	{
		if (*string == (char)searchedChar)
			return ((char *)string);
		string++;
	}
	if (searchedChar == '\0')
		return ((char *)string);
	return (NULL);
}
