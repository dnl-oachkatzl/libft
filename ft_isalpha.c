/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspring <daspring@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:12:23 by daspring          #+#    #+#             */
/*   Updated: 2024/08/09 12:04:25 by daspring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int s)
{
	return ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'));
}
