/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:09:59 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/13 12:10:02 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates sufficient memory for a copy of a string
char	*ft_strdup(const char *s)
{
	char	*copy;
	int		index;

	index = 0;
	copy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!copy)
		return (NULL);
	while (s[index])
	{
		copy[index] = s[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}
