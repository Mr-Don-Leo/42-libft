#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t index;
    size_t srclength;
    size_t dstlength;

    index = 0;
    // gets length
    dstlength = ft_strlen(dst);
    srclength = ft_strlen(src);
    // checks if  values are not Null
    if (!dstsize && !dst)
        return (0);
    // checks difference, so it can see if it cannot copy all of src into dst due to the space limitation
    // then adds srclength to dstsize to make enough space for the adding of string 
    if (dstsize <= dstlength)
        return (dstsize + srclength);
    // loops if src index is not a null term and if there is enough space to 
    // copy, +1 includes null terminator.
    while (src[index] && dstlength + 1 < dstsize)
    {
        dst[dstlength] = src[index];
        dstlength--;
        index++;
    }
    // adding null terminator
    dst[dstlength] = '\0';
    // returning both lengths 
    return (ft_strlen(dst) + ft_strlen(&src[index]));
}

// concatenating two strings while ensuring
// that the destination buffer does not overflow