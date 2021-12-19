#include <stdio.h>
void main()
{
    int i, j, k, n;
    printf("Enter side length of triangle: ");
    scanf("%d", &n);
    printf("\n");
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}