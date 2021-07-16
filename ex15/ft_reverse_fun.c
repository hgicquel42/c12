#include "ft_list.h"

// // REMOVE
// #include <stdio.h>
// #include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, int x)
{
	int		index;
	t_list	*list;

	index = 0;
	list = begin_list;
	while (list && index < x)
		list = list->next, index++;
	if (index == x)
		return (list);
	return (0);
}

void	ft_reverse_fun(t_list *begin_list)
{
	void	*data;
	int		size;
	int		index;
	t_list	*curr;
	t_list	*oppo;

	if (!begin_list || !begin_list->next)
		return ;
	curr = begin_list;
	size = 0;
	while (curr)
		curr = curr->next, size++;
	index = 0;
	while (index < (size / 2))
	{
		curr = ft_list_at(begin_list, index);
		oppo = ft_list_at(begin_list, size - 1 - index);
		data = curr->data;
		curr->data = oppo->data;
		oppo->data = data;
		index++;
	}
}

// void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
// 	if (!begin_list)
// 		return ;
// 	f(begin_list->data);
// 	ft_list_foreach(begin_list->next, f);
// }

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*list;

// 	list = malloc(sizeof(t_list));
// 	if (!list)
// 		return (0);
// 	list->data = data;
// 	list->next = 0;
// 	return (list);
// }

// void	ft_print(void *data)
// {
// 	printf("%s\n", (char *) data);
// }

// int main()
// {
// 	t_list	*list;
// 	list = ft_create_elem("works");
// 	list->next = ft_create_elem("it");
// 	list->next->next = ft_create_elem("world");
// 	list->next->next->next = ft_create_elem("hello");
// 	ft_reverse_fun(list);
// 	ft_list_foreach(list, ft_print);
// }