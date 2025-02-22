/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:19:06 by mouad             #+#    #+#             */
/*   Updated: 2024/11/05 21:12:14 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int    n,int   fd)
{
    if(n < 0)
    {
        write(1,"-",1);
        n = -n;
    }
    if(n >= 10)
    {
        ft_putnbr_fd(n / 10,fd);
    }
    char    c = (n % 10) + '0';
    write(fd,&c,1);
}