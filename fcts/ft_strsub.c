
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *t;
  size_t i;
  size_t n;
  size_t j;

  i = 0;
  j = 0;
  n = len + start;
  t = (char*)malloc(len + 1);
  if (len < start)
    return (NULL);
  if (t == NULL)
    return (NULL);
  while (s[i] && len != 0)
    {
      if (i != start)
	i++;
      if (i == start)
	{
	  while (i < n)
	    {
	      t[j] = (char)s[i];
	      i++;
	      j++;
	    }
	}
    }
  return ((char*)t);
}
