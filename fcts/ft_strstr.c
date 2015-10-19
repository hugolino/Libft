
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
  size_t i;

  i = 0;
  if (s2[i] == 0)
    return (s1);
  while (s2[i])
    if (s2[i] != s1[i])
      i++;

}
