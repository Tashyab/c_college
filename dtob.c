#include <stdio.h>
#include <string.h>
int main()
{
    int n, d;
    char dc[3], bl[40]="";
    printf("Enter a decimal number:");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        d=n%2;
        n/=2;
        sprintf(dc,"%d", d);
        strcat(bl,dc);
    }
    strrev(bl);
    printf("The binary of %d is %s", temp, bl);
}


