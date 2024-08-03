#include <stdio.h>

#define FACT_VAL 600851475143


int main(void)
{
  long long val       = FACT_VAL,
            curr_fact = 2;

  while(val != 1)
  {
    if(val % curr_fact == 0)
        val = val / curr_fact;
    else
      curr_fact = curr_fact + 1;
  }
  
  printf("%d\n", curr_fact);

  return 0;
}
