#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        char temp;
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len-i-1; j++)
            {
                if(str[j]>str[j+1])
                {
                    temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                }
            }
        }
        int num=str[len-1]-'a'+1;
        printf("%d\n",num);
    }

    return 0;
}
