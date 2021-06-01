#ifndef BIDIRECTIONAL_LIST_H
# define BIDIRECTIONAL_LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
typedef struct s_bd_lst
{
	struct s_bd_lst		*next;
	struct s_bd_lst		*prev;
	void				*data;
}						t_bd_lst;

size_t					bd_strlen(const char *s);
int						bd_memcmp(const void *s1, const void *s2, size_t n);
char					*bd_strdup(const char *src);
int						bd_strcmp(const char *s1, const char *s2);
void					node_print(void *data);

void		bd_lstinsert(t_bd_lst **cur, t_bd_lst *new);
t_bd_lst	*bd_lstfind(t_bd_lst *lst, void *data, int size, int (*comp)());

void		bd_lstdelone(t_bd_lst *lst, void (*del)(void*));
void		bd_lstclear(t_bd_lst **lst, void (*del)(void *));
void		bd_lstremove(t_bd_lst **head, t_bd_lst *cur, void (*del)(void *));
void		bd_lstrelink(t_bd_lst *n1, t_bd_lst *n2, t_bd_lst *new);

t_bd_lst	*bd_lstnew(void *data);
t_bd_lst	*bd_lstlast(t_bd_lst *lst);
int			bd_lstsize(t_bd_lst *lst);
void		bd_lstadd_front(t_bd_lst **lst, t_bd_lst *new);
void		bd_lstadd_back(t_bd_lst **lst, t_bd_lst *new);
void		bd_lstpush_sort(t_bd_lst **lst, t_bd_lst *new, int (*comp)(t_bd_lst *, t_bd_lst *));

void		bd_lstiter(t_bd_lst *lst, void (*f)(void *));
void		*def_cont_copy(void *data);
void		bd_lstprint(t_bd_lst *lst, void (*print)(void *));
t_bd_lst	*bd_lstcopy(t_bd_lst *list, void *(*data_copy)(void *));
t_bd_lst	*bd_lstmap(t_bd_lst *lst, void *(*f)(void *), void (*del)(void *));
int			bd_lstmax_cont_len(t_bd_lst *lst);
t_bd_lst	*bd_lstfind(t_bd_lst *lst, void *data, int size, int (*comp)()); //CHECK IF WORKS CORRECTLY
void		bd_lstsort_merge(t_bd_lst **head, int (*comp)());
void		bd_lstsplit(t_bd_lst *lst, t_bd_lst **first_part, t_bd_lst **second_part);
t_bd_lst	*bd_lst_compared_merge(t_bd_lst *n1, t_bd_lst *n2, int (*comp)());
t_bd_lst	*bd_lst_merge(t_bd_lst **n1, t_bd_lst **n2);

t_bd_lst	*bd_parse_from_arr(char **arr, void *(*copy)(void *));
char		**bd_parse_to_arr(t_bd_lst *lst, void *(*copy)(void *));


#endif