/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:43:00 by staminh           #+#    #+#             */
/*   Updated: 2018/09/06 17:04:21 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_print(int param1, int param2, int param3)
{
	int coma;
	int next;

	coma = ',';
	next = ' ';
	ft_putchar(param1 + 48);
	ft_putchar(param2 + 48);
	ft_putchar(param3 + 48);
	if (param1 != 7)
	{
		ft_putchar(coma);
		ft_putchar(next);
	}
}

void	ft_print_comb(void)
{
	int param1;
	int param2;
	int param3;

	param1 = 0;
	param2 = 0;
	param3 = 0;
	while (param1 <= 9)
	{
		param2 = param1 + 1;
		while (param2 <= 9)
		{
			param3 = param2 + 1;
			while (param3 <= 9)
			{
				ft_print(param1, param2, param3);
				param3++;
			}
			param2++;
		}
		param1++;
	}
}
