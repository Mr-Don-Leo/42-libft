/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:18:30 by mbabayan          #+#    #+#             */
/*   Updated: 2023/11/13 01:39:45 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
    {
		ft_putchar_fd(45, fd);
        ft_putnbr_fd(-n, fd);
	}
    else if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + 48, fd);
	}
    else
        ft_putchar_fd(n + 48, fd);
}