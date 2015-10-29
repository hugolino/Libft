#include "libft.h"

size_t        ft_count_lines(char const *str, char c)
{
  size_t      b;
  size_t      m;

  b = 0;
  m = 1;
  while (str[b])
    {
      if (str[b] != c)
	b++;
      if (str[b] == c && str[b + 1] != c)
	{
	  b++;
	  m++;
	}
      else if (str[b] == c && str[b + 1] == c)
	b++;
    }
  return (m);
}
