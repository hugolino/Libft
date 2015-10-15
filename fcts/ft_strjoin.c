
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
  char *str;
  int len;

  len = ft_strlen(s1) + ft_strlen(s2);
  str = (char*)malloc(sizeof(char) * (len + 1));
  if (str == NULL)
    return (NULL);
  ft_strcpy(str, s1);
  ft_strcat(str, s2);
  return (str);
}
