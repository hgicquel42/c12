#include "ft_list.h"

// //REMOVE
// #include <stdio.h>
// #include <stdlib.h>

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;

	if (!begin_list)
		return ;
	if (*begin_list && cmp(data, (*begin_list)->data) > 0)
		return (ft_sorted_list_insert(&((*begin_list)->next), data, cmp));
	elem = ft_create_elem(data);
	if (*begin_list)
		elem->next = *begin_list;
	*begin_list = elem;
}

void	ft_sorted_list_merge(
	t_list **begin_list,
	t_list *begin_list2,
	int (*cmp)()
)
{
	if (!begin_list2)
		return ;
	ft_sorted_list_insert(begin_list, begin_list2->data, cmp);
	ft_sorted_list_merge(begin_list, begin_list2->next, cmp);
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

// int	ft_strcmp(char *a, char *b)
// {
// 	while (*a && *a == *b)
// 		a++, b++;
// 	return (*a - *b);
// }

// int	ft_cmp(void *a, void *b)
// {
// 	return (ft_strcmp((char *) a, (char *) b));
// }

// void	ft_print(void *str)
// {
// 	printf("%s\n", (char *) str);
// }

// int	main()
// {
// 	t_list	*list1 = ft_create_elem("aaa");
// 	t_list	*list2 = ft_create_elem("ddd");
// 	t_list	*list3 = ft_create_elem("ccc");
// 	t_list	*list4 = ft_create_elem("eee");
// 	t_list	**begin_list = malloc(sizeof(t_list *));
// 	*begin_list = list1;
// 	list1->next = list2;

// 	list3->next = list4;

// 	ft_sorted_list_merge(begin_list, list3, &ft_cmp);
// 	ft_list_foreach(*begin_list, &ft_print);
// }