
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
  /*  int i;
  int j;
  int len;
  int len2;
  char *str;
  char *dst;

  i = 0;
  j = 0;
  len2 = ft_strlen(s);
  str = (char*)malloc(sizeof(char) * (len2 +1));
  while (s[i])
    {
      if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	i++;
      else
	{
	  str[j] = s[i];
	  i++;
	  j++;
	}
    }
  len = ft_strlen(str);
  dst = (char*)malloc(sizeof(char) * (len + 1));
  if (dst == NULL)
    return (NULL);
  ft_strcpy(dst, str);
  return (dst);*/
  int len;
  int i;
  int j;
  int lenk;
  int k;
  char *str;

  i = 0;
  len = ft_strlen(s);
  j = len;
  k = 0;
  while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    i++;
  while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
    j--;
  lenk = len - j - i;
  i = i + 1;
  str = (char*)malloc(sizeof(char) * (lenk + 1));
  while (i < j)
    {
      str[k] = s[i];
      i++;
      k++;
    }
  return (str);
}
