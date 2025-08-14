/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:39:22 by hait-bel          #+#    #+#             */
/*   Updated: 2025/08/14 12:50:36 by hait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_pr(char i, char j, char k, char l)
{
        write(1, &i, 1);
        write(1, &j, 1);
        write(1, " ", 1);
        write(1, &k, 1);
        write(1, &l, 1);
}

void    ft_print_comb2(void)
{
        char    i;
        char    j;
        char    k;
        char    l;

        i = '0';
        while( i <= '9'){
                j = '0';
                while(j <= '8'){
                        k = i ;
                        l = j +1;
                        while(k <= '9') {
                                while(l <= '9'){
                                        ft_pr(i, j, k, l);
                                        if (!(i == '9' && j == '8' && k == '9' && l == '9'))
                                                write(1, ", ", 2);
                                        l++;
                                }
                                k++;
                                l='0';
                        }
                        j++;
                }
                i++;
        }
}

int main(){
ft_print_comb2();
}
