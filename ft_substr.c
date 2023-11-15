/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:41:25 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/13 13:41:29 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t index;
    char *dest;

    index = 0;
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
    dest = (char *)malloc((len + 1) * sizeof(char));
    if (!dest || !s)
        return (NULL);
    while (index < len)
    {
        dest[index] = s[start + index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}