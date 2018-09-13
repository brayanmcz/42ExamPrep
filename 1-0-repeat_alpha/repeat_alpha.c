/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 00:48:07 by bcastro           #+#    #+#             */
/*   Updated: 2018/09/13 00:48:11 by bcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_alpa_index(char c)
{
    int index;

    if (c >= 'a' && c <= 'z')
        index = c - 'a' + 1;
    else if (c >= 'A' && c <= 'Z')
        index = c - 'A' + 1;
    else
        index = 1;
    return (index);
}

void ft_print_index_times(char c)
{
    int i;

    i = 0;
    while (i < ft_alpa_index(c))
    {
        write(1, &c, 1);
        i++;
    }
}

void ft_repeat_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_print_index_times(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        ft_repeat_alpha(argv[1]);
    }
    write(1, "\n", 1);

    return (0);
}