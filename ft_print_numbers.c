/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:08:41 by hait-bel          #+#    #+#             */
/*   Updated: 2025/08/13 16:15:01 by hait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
	void ft_print_numbers(void)
{
		int	num;
		num = 0;
		while(num <= '9')
		{
			write(1, &num, 1);
			num++;
		}
	}
int main()
{	ft_print_numbers();
return 0 ;
}

