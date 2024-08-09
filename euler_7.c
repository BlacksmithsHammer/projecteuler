#include <stdio.h>

#define MAX_TABLE_SIZE 200000
#define FIND_KTH 10001

int main(void)
{
    int arr[MAX_TABLE_SIZE + 1] = {};

    for (int div = 2; div * div <= MAX_TABLE_SIZE; div++)
    {
        for (int step = div * 2; step <= MAX_TABLE_SIZE; step = step + div)
            arr[step] = 1;
    }

    int k = 0;
    for (int i = 2; i <= MAX_TABLE_SIZE; i++)
    {
        if (arr[i] == 0)
            k = k + 1;

        if (k == FIND_KTH)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
