/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse:alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marf00 <mrodfer1@gmail.com> +#+  +:+       +#+                       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:50:00 by marf00            #+#    #+#             */
/*   Updated: 2026/09/29 18:50:00 by marf00           ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
