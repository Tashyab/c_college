#include <stdio.h>
#include <string.h>

int count(char ch, char st[])
{
    int t=0;
    for(int i=0; i<strlen(st); i++)
    {
        if(st[i]==ch)
            t++;
    }
    return t;
}

int main()
{
    char s[200], chl[200]={}, ch;
    printf("Enter the input string: ");
    scanf("%[^\n]%*c", s);
    int l=strlen(s);
    for(int i=0; i<l; i++)
    {
        for(int j=i+1; j<l; j++)
        {
            if(s[i]>s[j])
            {
                ch=s[i];
                s[i]=s[j];
                s[j]=ch;
            }
        }
    }
    
    int key;
    printf("The letter frequency is-\n");
    for(int i=0; i<strlen(s); i++)
    {
        key=0;
        for(int j=0; j<strlen(chl); j++)
        {
            if(chl[j]==s[i])
            {
                key++;
                break;
            }
        }
        chl[i]=s[i];
        if(key==0)
        {
            if(s[i]!='\n')
            {
                if (s[i]==' ')
                   printf("<space> %d\n", count(s[i], s)); 
                else
                    printf("%c %d\n", s[i], count(s[i], s));
            } 
        }
    }  
}