#include "libft.h"

char	       *ft_strlowcase(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      if (ft_isupper((int)str[i]) == 1)
	{
	  str[i] = ft_tolower(str[i]);
	  i++;
	}
      else
	i++;
    }
  return (str);
}
