#include <stdio.h>

#define MAX_VALUE 1000

int main(void)
{
  int summ3  = 0;
  int summ5  = 0;
  int summ15 = 0;

  for(int s3 = 0; s3 < MAX_VALUE; s3 = s3 + 3)
  {
    summ3 = summ3 + s3;
  }
  
  for(int s5 = 0; s5 < MAX_VALUE; s5 = s5 + 5)
  {
    summ5 = summ5 + s5;
  }
  
  for(int s15 = 0; s15 < MAX_VALUE; s15 = s15 + 15)
  {
    summ15 = summ15 + s15;
  }

  printf("%d\n", summ3 + summ5 - summ15);

  return 0;
}
