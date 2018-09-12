/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:58:06 by bcastro           #+#    #+#             */
/*   Updated: 2018/09/12 12:58:08 by bcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_contains_letter(char c, char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{   
    if (argc == 2)
    {
        if (ft_contains_letter('a', argv[1]))
        {
            write(1, "a", 1);
        }
        else
        {
            write(1, "\n", 1);
        }
    }
    else
    {
        write(1, "a", 1);
        write(1, "\n", 1);
    }
    return (0);
}