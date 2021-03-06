/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <tcoppin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 18:39:27 by tcoppin           #+#    #+#             */
/*   Updated: 2015/03/25 18:39:28 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh.h"

char	**ft_parse_env(char *env)
{
	char	**env_tab;
	int		i;

	env_tab = (char **)malloc(sizeof(char *) * 3);
	i = 0;
	while (env[i] != '=')
		i++;
	env_tab[0] = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (env[i] != '=')
	{
		env_tab[0][i] = env[i];
		i++;
	}
	env_tab[0][i] = '\0';
	i++;
	env_tab[1] = ft_strdup(env + i);
	env_tab[2] = NULL;
	return (env_tab);
}

char	**ft_tild_split(char **split, char *home)
{
	int		i;
	char	*tmp;

	i = 0;
	while (split[i])
	{
		if (split[i][0] == '~')
		{
			tmp = split[i];
			split[i] = ft_strjoin(home, tmp + 1);
			free(tmp);
		}
		i++;
	}
	return (split);
}
