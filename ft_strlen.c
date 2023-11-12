/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:43 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/05 11:43:33 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Code loops through a string of characters, for each character it
increments index, at the end once the loop reaches Null it returns index
*/

int ft_strlen(const char *str)
{
    size_t index;

    index = 0;
    while (str[index] != '\0')
        index++;
    return (index);
}

