#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
}

// It assigns the next pointer of the new element to the pointer to the first element (*lst), 
// effectively making the ‘new’ element point to the current first element of the list. Then, 
// it updates the pointer to the first element (*lst) to point to the ‘new’ element, 
// making it the new first element of the list. 