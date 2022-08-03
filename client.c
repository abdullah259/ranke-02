/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghazi <aghazi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:24:13 by aghazi            #+#    #+#             */
/*   Updated: 2022/08/03 21:29:43 by aghazi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
// char    *ft_strpbrk(const char *s, const char *charset)
// {
//     int i;
//     int j; 

//     i = 0;
//     j = 0;
//     while (s[i])
//     {
//         j = 0;
//         while (charset[j])
//         {
//             if (s[i] == charset[j])
//                 return ((char *)&s[i]);
//             j++;
//         }
//         i++;
//     }
//     return (NULL);
// }

// int check_doubles(char *s1,int i)
// {
//     int j;

//     j = 0;
//     while (j < i)
//     {
//         if (s1[j] == s1[i])
//             return (0);
//         j++;
//     }
//     return (1);
// }

int is_power_of_2(unsigned int x)
{
    // while (n > 1)
    // {
    //     if (n % 2)
    //         return (0);
    //     n /=2;
    // }
    // return (n == 1);
    return x && (!(x & (x - 1)));
}

void	print_bits(unsigned char octet)
{
    int i;

    i = 128;
    while (i)
    {
        if (octet >= i)
            write(1,"1",1);
        else
            write(1,"0", 1);
        octet -= i * (octet >= i);
        i /= 2;
    }
}
unsigned char	reverse_bits(unsigned char octet)
{
    int i = -1;
    unsigned char a = 0;

    while (++i < 8)
    {
        // a <<= 1;
        // a += octet & 1;
        // octet >>= 1;
        a *= 2;
        a += octet % 2;
        octet /= 2;
        // if (octet % 2)
        //     a = a * 2 + 1;
        // else
        //     a = a * 2;
        // octet /= 2;
    }
    return (a);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    // if (argc == 3) 30;0;15;1
    // {
    //     while (argv[1][i])
    //     {
    //         j = 0;
    //         while (argv[2][j])
    //         {
    //             if (argv[1][i] == argv[2][j] && check_doubles(argv[1],i))
    //             {
    //                 write(1,&argv[2][j],1);
    //                 break;
    //             }
    //             j++;
    //         }
    //         i++;
    //     }
    // }
    printf("%d\n",is_power_of_2(16));
    //print_bits(2);
    // printf("%d\n",reverse_bits(65));
    // print_bits(reverse_bits(16));
    // write(1,"\n",1);
	return (0);
}
