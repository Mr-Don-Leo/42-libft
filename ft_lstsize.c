#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    size_t index; 

    index = 0;
    while(lst)
    {
        lst = lst -> next;
        index++;
    }
    return (index);
}

// enters a while loop that iterates through the linked list
// During each iteration, it checks if the lst pointer is not NULL
// If lst is not NULL, it means there is at least one more element in the list
// so the function advances to the next element by updating lst to lst->next
// increments index by 1 until it reaches null then returns index