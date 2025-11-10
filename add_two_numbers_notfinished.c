#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int 			val;
    struct ListNode	*next;
};

struct ListNode  *ft_lstnew(int cont)
{
    struct ListNode  *new;

	new = malloc(sizeof(struct ListNode));
	if (!new)
		return (NULL);
    new->val = cont;
    new->next = NULL;
	return (new);
}
void	ft_lstadd_back(struct ListNode **lst, struct ListNode *new)
{
	struct ListNode	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	if (!tmp)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	ft_lstadd_front(struct ListNode **lst, struct ListNode *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
	struct ListNode	*lista = NULL;
	long long		n1 = 0, n2 = 0;
	long long		rev1 = 0, rev2 = 0;
	long long		result;

	while (l1 || l2)
	{
		if (l1)
		{
			n1 = n1 *10 + l1->val;
			l1 = l1->next;
		}
		if (l2)
		{
			n2 = n2 *10 + l2->val;
			l2 = l2->next;
		}	
	}
	while (n1)
	{
		rev1 = (rev1 * 10) + (n1 % 10);
		n1 = n1 / 10;
	}
	while (n2)
	{
		rev2 = (rev2 * 10) + (n2 % 10);
		n2 = n2 / 10;
	}
	result = rev1 + rev2;
	if (result == 0)
		return (ft_lstnew(0));

	while (result)
	{
		ft_lstadd_front(&lista, ft_lstnew(result % 10));
		result = result / 10;
	}
	return (lista);
}

/* int main(void)
{
	struct ListNode	*a = NULL;
	struct ListNode	*b = NULL;
	struct ListNode	*c;

	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&a, ft_lstnew(9));
	ft_lstadd_back(&b, ft_lstnew(9));
	ft_lstadd_back(&b, ft_lstnew(9));
	ft_lstadd_back(&b, ft_lstnew(9));
	ft_lstadd_back(&b, ft_lstnew(9));
	c = addTwoNumbers(a, b);
	while (c)
	{
		printf("%i -", c->val);
		c = c->next;
	}
	printf("\n");
} */
/* Refazer addTwoNumbers() usando o conceito de carry */