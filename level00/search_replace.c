/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 00:31:08 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/04 00:48:32 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if(ac == 4)
	{
		while(av[1][i] && !av[2][1] && !av[3][1])
		{
			if(av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}