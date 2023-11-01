#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list *newList;

    newList = (t_list *)malloc(sizeof(t_list));
    if (!newList)
		return (NULL);
	newList -> content = content;
	newList -> next = NULL;
	return (newList);
}

// Allocates (with malloc(3)) and returns a new
// element.  The variable ’content’ is initialized
// with the value of the parameter ’content’.  The
// variable ’next’ is initialized to NULL.