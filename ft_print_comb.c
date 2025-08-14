/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:01:53 by hait-bel          #+#    #+#             */
/*   Updated: 2025/08/13 20:45:22 by hait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	void ft_human(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
};

	void ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;
	a = '0';
	while(a <= '7'){
		b = a+1;
		while(b <= '8'){
			c =b+1;
			while (c <='9'){
				ft_human(a,b,c);
				if(!(a == '7' && b == '8' && c == '9')){
					write(1, ", ", 2);
			} 
		       	c++;
			}
			b++;
		}
	a++;
	}
}
