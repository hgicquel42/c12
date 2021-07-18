#include "ft_list.h"

// // REMOVE
// #include <stdio.h>
// #include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*last;
	t_list	*current;
	t_list	*previous;

	if (!begin_list || !*begin_list)
		return ;
	last = *begin_list;
	while (last->next)
		last = last->next;
	current = last;
	while ((*begin_list)->next)
	{
		previous = *begin_list;
		while (previous->next != current)
			previous = previous->next;
		previous->next = 0;
		current->next = previous;
		current = previous;
	}
	*begin_list = last;
}

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

// void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
// 	if (!begin_list)
// 		return ;
// 	f(begin_list->data);
// 	ft_list_foreach(begin_list->next, f);
// }

// void	ft_print(void *p)
// {
// 	printf("%s\n", (char *) p);
// }

// int	main(void)
// {
// 	t_list	*list1 = ft_create_elem("hello");
// 	t_list	*list2 = ft_create_elem("world");
// 	t_list	*list3 = ft_create_elem("it");
// 	t_list	*list4 = ft_create_elem("works");
// 	t_list	**begin_list = malloc(sizeof(t_list *));

// 	*begin_list = list1;
// 	list1->next = list2;
// 	list2->next = list3;
// 	list3->next = list4;

// 	ft_list_reverse(begin_list);
// 	ft_list_foreach(*begin_list, ft_print);
// 	return (0);
// }