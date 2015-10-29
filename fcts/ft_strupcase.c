#include "libft.h"

char	       *ft_strupcase(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      if (ft_islower((int)str[i]) == 1)
	{
	  str[i] = ft_toupper(str[i]);
	  i++;
	}
      else
	i++;
    }
  return (str);
}
