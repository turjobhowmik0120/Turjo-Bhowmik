
#include <stdio.h>

int main()
{
    int a[2][2] = {{2,3},{4,5}};
    int b[2][2] = {{7,8},{8,7}};
    int i,j,k,sum;

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=0;
            for(k=0; k<2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}
