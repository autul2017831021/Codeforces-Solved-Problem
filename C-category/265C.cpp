#include<stdio.h>
#include<string.h>
main()
{
    char s[1000005];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='r')
        {
            printf("%d\n",i+1);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='l')
        {
            printf("%d\n",i+1);
        }
    }
}
