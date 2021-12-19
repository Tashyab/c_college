#include <stdio.h>
void main()
{
    int p=0, tp1=0, tp2=0, i, j, n, key=0, c[56];;
    printf("Enter number of cards:");
    scanf("%d", &n);

    printf("Enter the cards\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &c[i]);
    }

    for(i=0; i<n; i++)
    {
        key=0;
        if(c[i]==1 && i<n-4)
        {
            for(j=i+1; j<=i+4; j++)
            {
                if (c[j]==1 || c[j]==11 || c[j]==12 || c[j]==13)
                {
                    key++;
                    break;
                }
            }
            if(key==0)
            {
                p=4;
                if(i%2==0)
                {
                    printf("A scored %d\n", p);
                    tp1=p+tp1;
                }
                else
                {
                    printf("B scored %d\n", p);
                    tp2=p+tp2;
                }
            }
        }

        if(c[i]==13 && i<n-3)
        {
            for(j=i+1; j<=i+3; j++)
            {
                if (c[j]==1 || c[j]==11 || c[j]==12 || c[j]==13)
                {
                    key++;
                    break;
                }
            }
            if(key==0)
            {
                p=3;
                if(i%2==0)
                {  
                    printf("A scored %d\n", p);
                    tp1=p+tp1;
                }
                else
                {
                    printf("B scored %d\n", p);
                    tp2=p+tp2;
                }
            }
        }

        if(c[i]==12 && i<n-2)
        {
            for(j=i+1; j<=i+2; j++)
            {
                if (c[j]==1 || c[j]==11 || c[j]==12 || c[j]==13)
                {
                    key++;
                    break;
                }
            }
            if(key==0)
            {
                p=2;
                if(i%2==0)
                {
                    printf("A scored %d\n", p);
                    tp1=p+tp1;
                }
                else
                {
                    printf("B scored %d\n", p);
                    tp2=p+tp2;
                }
            } 
        }

        if(c[i]==11 && i<n-1)
        {
            for(j=i+1; j<=i+1; j++)
            {
                if (c[j]==1 || c[j]==11 || c[j]==12 || c[j]==13)
                {
                    key++;
                    break;
                }
            }
            if(key==0)
            {
                p=1;
                if(i%2==0)
                {
                    printf("A scored %d\n", p);
                    tp1=p+tp1;
                }
                else
                {
                    printf("B scored %d\n", p);
                    tp2=p+tp2;
                }
            }
        }
    }
    printf("A: %d\n", tp1);
    printf("B: %d\n", tp2);
}