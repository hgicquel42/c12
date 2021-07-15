#include "ft_list.h"

//REMOVE
#include <stdio.h>
#include <stdlib.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*next;
	void	*data;

	if (!begin_list)
		return ;
	current = *begin_list;
	if (!current)
		return ;
	while (current->next)
	{	
		next = current->next;
		if (cmp(current->data, next->data) > 0)
		{
			data = current->data;
			current->data = next->data;
			next->data = data;
			current = *begin_list;
			continue ;
		}
		current = next;
	}
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list)
		return ;
	f(begin_list->data);
	ft_list_foreach(begin_list->next, f);
}

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

int	ft_strcmp(char *a, char *b)
{
	while (*a && *a == *b)
		a++, b++;
	return (*a - *b);
}

int	ft_cmp(void *a, void *b)
{
	return (ft_strcmp((char *) a, (char *) b));
}

void	ft_print(void *str)
{
	printf("%s\n", (char *) str);
}

int main()
{
	t_list	*list1 = ft_create_elem("ddd");
	t_list	*list2 = ft_create_elem("aaa");
	t_list	*list3 = ft_create_elem("ccc");
	t_list	*list4 = ft_create_elem("bbb");
	t_list	**begin_list = malloc(sizeof(t_list *));
	*begin_list = 0;
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;

	ft_list_sort(begin_list, &ft_cmp);
	ft_list_foreach(*begin_list, &ft_print);
}