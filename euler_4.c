#include <stdio.h>

int main(void)
{
  int _min = -1,
      val;

  for (int i = 100; i < 1000; i++)
    for (int j = 100; j < 1000; j++)
    {
      val = i * j;
      
      // code-style is beautiful
      if ( val > 99999 && val < 1000000 && val > _min &&
           val / 100000 % 10 == val / 1   % 10        &&
           val / 10000  % 10 == val / 10  % 10        &&
           val / 1000   % 10 == val / 100 % 10 )
        _min = val;
    }

  printf("%d\n", _min);

  return 0;
}
