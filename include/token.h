/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseddik <moseddik@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:13:22 by moseddik          #+#    #+#             */
/*   Updated: 2022/07/08 11:59:43 by moseddik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H
# include "minishell.h"

typedef enum s_token_type
{
	WORD,
	PIPE,
	REDIRECTION,
	OPERATOR,
	LEFTPAREN,
	RIGHTPAREN
}	t_token_type;

typedef struct s_token_list
{
	char				*lexeme;
	t_token_type		type;
	struct s_token_list	*next;
}	t_token_list;

// Linked List Functions
t_token_list	*ft_lstnew_token(char *content);
void			ft_lstadd_token_back(t_token_list **alst, t_token_list *new);

// Case Functions
char			*pipe_case(char *str, t_token_list *token_ptr);
char			*quote_case(char *str, t_token_list *token_ptr);
char			*word_case(char *str, t_token_list *token_ptr);
char			*operator_case(char *str, t_token_list *token_ptr);
char			*paren_case(char *str, t_token_list *token_ptr);
char			*redir_case(char *str, t_token_list *token_ptr);

// Tokenizer Utils_Functions
char			*skip_space(char *str);
int				is_token(char *str);

// Tokenizer Function
void			tokenizer(char *cmd, t_token_list **head);

#endif