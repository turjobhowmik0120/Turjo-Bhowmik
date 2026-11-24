
#include <stdio.h>

int main()
{
    int a[2][2] = {{2, 3}, {4, 5}};
    int b[2][2] = {{7, 8}, {8, 7}};
    int sum[2][2];
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
