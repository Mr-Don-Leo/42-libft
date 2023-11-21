/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:50:49 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/15 11:50:53 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count(char const *s, char c)
{
	int count;
	int index;

	count = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c)
		{
			count++;
			while (s[index] != c && s[index])
				index++;
		}
		else
			index++;
	}
}

char **ft_split(char const *s, char c)
{
	size_t index;


}