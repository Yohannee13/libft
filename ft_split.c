/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoandria <yoandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:02:48 by yoandria          #+#    #+#             */
/*   Updated: 2026/02/14 17:19:33 by yoandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	write_word(char **dest, char const *src, size_t size)
{
	*dest = (char *)malloc(sizeof(char) * (size));
	if (!*dest)
		return (0);
	ft_strlcpy(*dest, src, size);
	return (1);
}

static void	find_next_word(char const **s, char const **end, char c)
{
	while (**s == c && **s != '\0')
		(*s)++;
	*end = *s;
	while (**end != c && **end != '\0')
		(*end)++;
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s)
		return (count);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s == '\0')
			return (count);
		while (*s != c && *s != '\0')
			s++;
		count++;
	}
	return (count);
}

static void	free_strings_array(char **strings, size_t words_count)
{
	size_t	i;

	i = 0;
	while (i < words_count)
		free(strings[i++]);
	free(strings);
}

char	**ft_split(char const *s, char c)
{
	char		**splitted;
	size_t		words_count;
	size_t		i;
	char const	*end;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	splitted = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		find_next_word(&s, &end, c);
		if (!write_word(&splitted[i], s, end - s + 1))
		{
			free_strings_array(splitted, i);
			return (NULL);
		}
		s = end;
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}
