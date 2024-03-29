#include "ft_list.h"

// //REMOVE
// #include <stdio.h>
// #include <stdlib.h>

void	ft_list_split(t_list *head, t_list **front, t_list **back)
{
	t_list	*slow;
	t_list	*fast;

	slow = head;
	fast = head->next;
	while (fast)
	{
		fast = fast->next;
		if (!fast)
			break ;
		slow = slow->next;
		fast = fast->next;
	}
	*front = head;
	*back = slow->next;
	slow->next = 0;
}

t_list	*ft_list_merge(t_list *front, t_list *back, int (*cmp)())
{
	if (!front)
		return (back);
	if (!back)
		return (front);
	if (cmp(front->data, back->data) <= 0)
	{
		front->next = ft_list_merge(front->next, back, cmp);
		return (front);
	}
	else
	{
		back->next = ft_list_merge(front, back->next, cmp);
		return (back);
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*front;
	t_list	*back;

	if (!begin_list || !*begin_list || !(*begin_list)->next)
		return ;
	ft_list_split(*begin_list, &front, &back);
	ft_list_sort(&front, cmp);
	ft_list_sort(&back, cmp);
	*begin_list = ft_list_merge(front, back, cmp);
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

// int main()
// {
// 	t_list	*list1 = ft_create_elem("ddd");
// 	t_list	*list2 = ft_create_elem("aaa");
// 	t_list	*list3 = ft_create_elem("ccc");
// 	t_list	*list4 = ft_create_elem("bbb");
// 	t_list	**begin_list = malloc(sizeof(t_list *));
// 	*begin_list = list1;
// 	list1->next = list2;
// 	list2->next = list3;
// 	list3->next = list4;

// 	ft_list_sort(begin_list, &ft_cmp);
// 	ft_list_foreach(*begin_list, &ft_print);
// }