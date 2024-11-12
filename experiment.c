#include<stdio.h>
int main()
{
    int i,j;
    int n = 5;
    for(i = 0;i<n;i++)
    {
        for(j = i;j<n;j++)
        {
            printf("*");
        }
        printf("\n*");
    }
    return 0;
}
