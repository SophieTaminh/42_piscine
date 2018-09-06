/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:49:31 by staminh           #+#    #+#             */
/*   Updated: 2018/09/06 17:05:14 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_print(int param1, int param2, int param3, int param4)
{
	int coma;
	int next;

	coma = ',';
	next = ' ';
	ft_putchar(param1 + 48);
	ft_putchar(param2 + 48);
	ft_putchar(next);
	ft_putchar(param3 + 48);
	ft_putchar(param4 + 48);
	if (param1 != 9 || param2 != 8 || param3 != 9 || param4 != 9)
	{
		ft_putchar(coma);
		ft_putchar(next);
	}
}

void	ft_calcul(int param1, int param2, int param3, int param4)
{
	while (param1 <= 9)
	{
		while (param2 <= 9)
		{
			while (param3 <= 9)
			{
				while (param4 <= 9)
				{
					ft_print(param1, param2, param3, param4);
					param4++;
				}
				param3++;
				param4 = param3;
			}
			param2++;
			param3 = param1;
			param4 = param2 + 1;
		}
		param1++;
		param2 = 0;
		param3 = param1 + 1;
		param4 = param1 + 1;
	}
}

void	ft_print_comb2(void)
{
	int param1;
	int param2;
	int param3;
	int param4;

	param1 = 0;
	param2 = 0;
	param3 = 0;
	param4 = 0;
	ft_calcul(param1, param2, param3, param4);
}
