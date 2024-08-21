#include <stdio.h>

#define BORDER 1000

int main()
{
  //   a + b + sqrt(a^2 + b^2) = BORDER
  //  (a + b - BORDER)^2 = a^2 + b^2
  //   2*a*b = 2 * BORDER * (a + b) - BORDER^2
  //   2*a*b = BORDER * (2*a + 2*b - BORDER)
  //   ...
  
  // but easy way looks like:
  int c;
  for (int a = 1; a <= BORDER; a++) 
  {
    for (int b = a + 1; b <= BORDER; b++) 
    {
      c = 1000 - a - b;
      
      if (a < b && 
          b < c &&
          a + b + c == BORDER &&
          a*a + b*b == c*c)
      {
          printf("%d %d %d, product: %d\n", a, b, c, a * b * c);
      }
    }
  }


  return 0;
}
