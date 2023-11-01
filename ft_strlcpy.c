#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t maxlen)
{
	size_t index;

	index = 0;
	// checks if maxlen is present
	if (maxlen)
	{
		// loops through while index is present in src and index is less than maxlenght -1 
		while (src[index] && index < maxlen - 1 )
		{
			//copies src to dst
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (ft_strlen(dst));
}

//used to copy a null terminated string to another buffer
//while ensuring that the destination buffer does not overflow