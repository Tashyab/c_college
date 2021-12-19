#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, m, pro=0;
    printf("Enter no. of rows or columns of the square array:");
    scanf("%d",&m);
    
    int **l1=malloc(m*sizeof(int*));
    for(i=0; i<m; i++)
        l1[i]=malloc(m*sizeof(int));
    printf("Enter the elements of first matrix row wise:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d", &l1[i][j]);
    }

    int **l2=malloc(m*sizeof(int*));
    for(i=0; i<m; i++)
        l2[i]=malloc(m*sizeof(int));
    printf("Enter the elements of the second matrix row wise:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d", &l2[i][j]);
    }
        
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            for(k=0; k<m; k++)
            {
                pro=pro+l1[i][k]*l2[k][j];
            }
            printf("%d ", pro);
            pro=0;
        }
    }
}