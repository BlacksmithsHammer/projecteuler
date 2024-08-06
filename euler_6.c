#include <stdio.h>

#define RANGE 100


int main()
{
    int ans = 0;
    
    // math trick
    for(int i = 1; i < RANGE; i++)
    {
        // convert to float necessary
        ans = ans + i * ( (i + 1 + RANGE) / 2.0 * (RANGE - i) );
    }
    
    ans = ans * 2;
    
    printf("%d\n", ans);
    return 0;
}
