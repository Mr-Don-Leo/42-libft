/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:44:09 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/12 21:20:39 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dstsize - dstlen - 1 is to check for available space
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dstlen;
    size_t  srclen;
    size_t  index;

    dstlen = strlen(dst);
    srclen = strlen(src);
    if (dstlen >= dstsize)
        return (srclen + dstsize);
    index = 0;
    while (index < dstsize - dstlen - 1 && src[index])
    {
        dst[dstlen + index] = src[index];
        index++;
    }
    dst[dstlen + index] = '\0';
    return (srclen + dstlen);
}
