/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:20:03 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/09 14:18:19 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((unsigned char *)s, 0, n);
}

// void print_buffer(const unsigned char *buffer, size_t size)
// {
//     for (size_t i = 0; i < size; i++)
//     {
//         printf("%02x ", buffer[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     // Edge Case 1: Normal case with a typical size
//     unsigned char buffer1[10] = "123456789";
//     printf("Before ft_bzero (buffer1): ");
//     print_buffer(buffer1, 10);
//     ft_bzero(buffer1, 10);
//     printf("After ft_bzero (buffer1): ");
//     print_buffer(buffer1, 10);

//     // Edge Case 2: Size is zero, should do nothing
//     unsigned char buffer2[10] = "abcdefgh";
//     printf("\nBefore ft_bzero with size 0 (buffer2): ");
//     print_buffer(buffer2, 10);
//     ft_bzero(buffer2, 0);
//     printf("After ft_bzero with size 0 (buffer2): ");
//     print_buffer(buffer2, 10);

//     // Edge Case 3: Size is smaller than buffer length
//     unsigned char buffer3[10] = "abcdefgh";
//     printf("\nBefore ft_bzero with partial size (buffer3): ");
//     print_buffer(buffer3, 10);
//     ft_bzero(buffer3, 5);
//     printf("After ft_bzero with partial size (buffer3): ");
//     print_buffer(buffer3, 10);

//     // Edge Case 4: Buffer is a single byte
//     unsigned char buffer4[1] = "A";
//     printf("\nBefore ft_bzero (buffer4): ");
//     print_buffer(buffer4, 1);
//     ft_bzero(buffer4, 1);
//     printf("After ft_bzero (buffer4): ");
//     print_buffer(buffer4, 1);

//     // Edge Case 5: NULL pointer with size zero (should not crash)
//     unsigned char *buffer5 = NULL;
//     printf("\nTesting ft_bzero with NULL pointer and size 0\n");
//     ft_bzero(buffer5, 0);  // This should do nothing and not crash

//     // Edge Case 6: Full zeroed buffer
//     unsigned char buffer6[10] = {0};
//     printf("\nBefore ft_bzero on already zeroed buffer (buffer6): ");
//     print_buffer(buffer6, 10);
//     ft_bzero(buffer6, 10);
//     printf("After ft_bzero on already zeroed buffer (buffer6): ");
//     print_buffer(buffer6, 10);

//     return 0;
// }