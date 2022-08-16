/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:43:55 by zaabou            #+#    #+#             */
/*   Updated: 2022/08/16 19:58:03 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENVIRONMENT_H
# define ENVIRONMENT_H

typedef	struct env
{
	char		*variable;
	char		*value;
	struct env	*next;
	struct env	*prev;
	
}t_env;

// functions
void    add_variable(t_env **m_env, t_env *var);
char	*get_variable(t_env *m_env, char *var);
void    remove_variable(t_env **m_env, char *var);
#endif