/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpereira <lpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:34:54 by lpereira          #+#    #+#             */
/*   Updated: 2020/12/03 23:42:20 by lpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);	

int		main(void)
{
	char *str = "MAIUSCULO";
	printf("%d \n", ft_str_is_uppercase(str));
}
