#include "ft_list.h"
#include <stdlib.h>

// // REMOVE
// #include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	list->data = data;
	list->next = 0;
	return (list);
}

// int	main(void)
// {
// 	int x = 42;
// 	t_list *list = ft_create_elem(&x);
// 	printf("%d", *((int *) list->data));
// 	return (0);
// }