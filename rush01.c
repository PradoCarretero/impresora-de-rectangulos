/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <algalian@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:40:33 by algalian          #+#    #+#             */
/*   Updated: 2022/11/06 09:42:29 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char z);

void	make_row(int x, char a, char b, char c)
{
	int	i;

	i = 1;
	if (i == 1)
	{
		ft_putchar(a);
		i++;
	}	
	while (i < x)
	{
		ft_putchar(b);
		i++;
	}	
	if (i == x)
	{
		ft_putchar(c);
	}
	write (1, "\n", 1);
}

void	rush(int x, int y)
{
	int	p;

	p = 1;
	if (y < 1 || x < 1)
	{
		write (1, "Por favor, introduzca solo números naturales\n", 45);
		return ;
	}
	if (p == 1)
	{
		make_row(x, '/', '*', '\\');
		p++;
	}	
	while (p < y)
	{
		make_row(x, '*', ' ', '*');
		p++;
	}	
	if (p == y)
		make_row(x, '\\', '*', '/');
}
