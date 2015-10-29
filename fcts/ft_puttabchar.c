#include "libft.h"

void	    ft_puttabchar(const char **tab)
{
  int i;

  i = 0;
  while (tab[i])
    {
      ft_putstr(tab[i]);
      ft_putstr("\n");
      i++;
    }
}
