#include "ft_list.h"

// // REMOVE
// #include <stdlib.h>
// #include <stdio.h>

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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*current;

	if (size == 0)
		return (0);
	current = ft_create_elem(strs[size - 1]);
	if (size == 1)
		return (current);
	current->next = ft_list_push_strs(size - 1, strs);
	return (current);
}

// int	main(void)
// {
// 	char	*strs[] = {"world", "hello", "works", "it"};
// 	t_list	*list = ft_list_push_strs(4, strs);

// 	while (list)
// 	{
// 		printf("%s\n", (char *) list->data);
// 		list = list->next;
// 	}
// 	return (0);
// }