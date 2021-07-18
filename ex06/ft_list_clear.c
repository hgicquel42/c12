#include "ft_list.h"
#include <stdlib.h>

// // REMOVE
// #include <stdio.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	if (!begin_list)
		return ;
	free_fct(begin_list->data);
	ft_list_clear(begin_list->next, free_fct);
	begin_list->next = 0;
	free(begin_list);
}

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*list;

// 	list = malloc(sizeof(t_list));
// 	if (!list)
// 		return (NULL);
// 	list->data = data;
// 	list->next = NULL;
// 	return (list);
// }

// void	free_fct(void *p)
// {
// 	if (p == NULL)
// 		return ;
// 	*((int *) p) = 0;
// }

// int	main(void)
// {
// 	int	x = 42;
// 	t_list	*list1 = ft_create_elem(NULL);
// 	t_list	*list2 = ft_create_elem(NULL);
// 	t_list	*list3 = ft_create_elem(&x);
// 	list1->next = list2;
// 	list2->next = list3;
// 	ft_list_clear(list1, &free_fct);
// 	printf("%d\n", x == 0);
// 	printf("%d\n", list1->data == NULL);
// 	printf("%d\n", list2->data == NULL);
// 	printf("%d\n", list3->data == NULL);
// 	return (0);
// }