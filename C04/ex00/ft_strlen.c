/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoi <jechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:44:29 by jechoi            #+#    #+#             */
/*   Updated: 2020/10/28 11:52:23 by jechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int pos;

	pos = 0;
	while (*str)
	{
		str++;
		pos++;
	}
	return (pos);
}