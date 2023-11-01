#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst && lst -> next)
        lst = lst -> next;
    return (lst);
}

// Checks if lst is present, then enters a loop which switches to next element
// until the condition in the while loop is not met, then it returns lst