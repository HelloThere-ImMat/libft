/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:58:08 by mdorr             #+#    #+#             */
/*   Updated: 2023/05/29 12:05:29 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		ret_val;
	va_list	args;

	va_start(args, format);
	ret_val = ft_dprintf(STDOUT_FILENO, format, args);
	va_end(args);
	return (ret_val);
}
