#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		number;
	t_list	*node;

	node = lst;
	number = 0;
	while (node != NULL)
	{
		number++;
		node = node->next;
	}
	return (number);	
}


/* Cuenta el número de nodos de una lista
*/