#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int len(char str[])
{
    int sum=0, i=0;
    while(str[i]!='\0')
    {
        sum++;
        i++;
    }
    return sum;
}

char* rev(char str[])
{
    char ch;
    int l=len(str);
    for(int i=0; i<l/2; i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    return str;
}

char* cat(char s1[], char s2[])
{
    int n=len(s1)+len(s2);
    char *sc=malloc(n*(sizeof(char)));
    for(int i=0; i<=n; i++)
    {
        if(i<len(s1))
            sc[i]=s1[i];
        else
            sc[i]=s2[i-len(s1)];
    }
    return sc;
}

void comp(char s1[], char s2[])
{
    int i=0;
    while((s1[i]==s2[i]) && (s1[i]!='\0'))
        i++;
    if(s1[i]>s2[i])
        printf("%s appears before %s.", s2, s1);
    else if(s1[i]<s2[i])
        printf("%s appears before %s.", s1, s2);
    else
        printf("Both the input strings are same.");
}

int main()
{
    char s1[52], s2[52], s3[52], s4[52];
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);
    strcpy(s3, s1);
    strcpy(s4, s2);

    printf("\n");
    printf("Length of the first string is %d.\n", len(s1));
    printf("Length of the second string is %d.\n", len(s2));
    printf("The reverse of the first string is %s.\n", rev(s1));
    printf("The reverse of the second string is %s.\n", rev(s2));
    printf("The concatenated string is %s.\n", cat(s3, s4));
    comp(s3, s4);
}
