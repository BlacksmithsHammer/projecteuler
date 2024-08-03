#include <stdio.h>

#define MAX_VALUE 4000000

int main(void)
{
  long long first  = 1,
            second = 1,
            curr   = first + second,
            summ   = 0;


  while (curr < MAX_VALUE)
  {
    if (curr % 2 == 0)
      summ = summ + curr;
    first  = second;
    second = curr;
    curr   = first + second;
  }

  printf("%d\n", summ);

  return 0;
}
