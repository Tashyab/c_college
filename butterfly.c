#include <stdio.h>

void main()
{
    int n;
    printf("Enter the wing length:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("*");
        }
        for (int k=1; k<=(2*n-2*i); k++)
        {
            printf(" ");
        }
        for(int l=1; l<=i; l++)
        {
            printf("*");
        }
        printf("\n");        
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            printf("*");
        }
        for(int k=2*n-2*i; k>=1; k--)
        {
            printf(" ");
        }
        for(int l=i; l>=1; l--)
        {
            printf("*");
        }
        printf("\n");
    }
}
