#include "libft.h"

int	ft_isspace(int a);
{
  if (a == '\t' || a == ' ')
    return (1);
  else
    return (0);
}
