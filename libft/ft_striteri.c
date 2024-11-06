/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:43:16 by mouad             #+#    #+#             */
/*   Updated: 2024/11/06 10:11:43 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char    *s,void (*f)(unsigned int,char*))
{
    if(!s || !f)
    {
        return;
    }
    unsigned int    i = 0;
    while(s[i])
    {
        f(i,&s[i]);
        i++;
    }
}

int main(void)
{
    char    name[] = "mouad";
    ft_striteri(name,ft_substr);
}
