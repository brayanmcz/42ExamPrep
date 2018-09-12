/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:00:44 by bcastro           #+#    #+#             */
/*   Updated: 2018/09/12 14:00:46 by bcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    int i;
    char c;

    i = 0;
    while (i <= 9)
    {
        c = i + '0';
        write(1, &c, 1);
        i++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}