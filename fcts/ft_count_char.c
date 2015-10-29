#include "libft.h"

size_t        ft_count_char(char const *str, char c, int a)
{
  size_t      w;

  w = 0;
  while (str[a])
    {
      if (str[a] == c)
	{
	  a++;
	  break ;
	}
      else if (str[a] != c)
	{
	  w++;
	  a++;
	}
    }
  return (w);
}
