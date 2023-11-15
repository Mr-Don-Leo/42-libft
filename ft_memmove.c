/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:06:25 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/15 13:08:32 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:06:25 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/15 12:51:24 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dest1;
    unsigned char *src1;

    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    if (!dest1 && !src1)
       return (NULL);
    if (dest < src)
        ft_memcpy(dest, src, n);
    else 
    {
        while (n--)
        {
            *(dest1 + n) = *(src1 + n);
        }
    }
    return (dest1);
}

// #include <stdio.h>

// int main()
// {
// 	char src[] = "Forty";
// 	char *dest = src + 1;
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	// ft_memmove(src, dest, 3);
//     ft_memcpy(src, dest, 3);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// }