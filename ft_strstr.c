/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstupin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:40:50 by alstupin          #+#    #+#             */
/*   Updated: 2018/11/23 17:27:12 by alstupin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (needle[b] == '\0')
		return ((char*)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b] == haystack[a + b])
		{
			if (needle[b + 1] == '\0')
				return ((char*)&haystack[a]);
			b++;
		}
		a++;
	}
	return (0);
}
