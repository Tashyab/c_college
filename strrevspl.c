#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[52], temp[52], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(temp, str);
    int l=strlen(str);
    int k=0;
    for(int i=0; i<l; i++)
    {
        // printf("i %d\n", i);
        if(isalpha(str[i])!=0)
        {
            for(int j=l-k-1; j>i; j--)
            {
                // printf("j %d\n", j);
                k++;
                if(isalpha(str[j])!=0)
                {
                    ch=str[i];
                    str[i]=str[j];
                    str[j]=ch;
                    break;
                }
            }
        }
    }
    printf("%s", str);
}