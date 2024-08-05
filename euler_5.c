#include <stdio.h>
#include <string.h>

#define RANGE 20

void update_mult(int *arr, int n)
{
  int div   = 2,
      div_k = 0;
  
  while (n > 1)
    if (n % div == 0)
    {
      div_k = div_k + 1;
      n = n / div;

      if (arr[div] < div_k)
        arr[div] = div_k;
    }
    else
    {
      if (arr[div] < div_k)
        arr[div] = div_k;
      
      div_k = 0;
      div   = div + 1;
    }
}

int main(void)
{
  int arr_mult[RANGE + 1];
  memset(arr_mult, 0, sizeof arr_mult);

  for (int i = 1; i < RANGE + 1; i++)
    update_mult(arr_mult, i);

  int ans = 1,
      i   = 0;
  while (i < RANGE + 1)
  {
    if (arr_mult[i] > 0)
    {
      arr_mult[i] = arr_mult[i] - 1;
      ans = ans * i;
    }
    else
    {
      i++;
    }
  }

  printf("%d\n", ans);

  return 0;
}
