/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 06:33:06 by bcastro           #+#    #+#             */
/*   Updated: 2018/09/13 06:33:09 by bcastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_search_and_replace(char *str, char a, char b)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == a)
        {
            write(1, &b, 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        ft_search_and_replace(argv[1], argv[2][0], argv[3][0]);
    }
    write(1, "\n", 1);
    return (0);
}