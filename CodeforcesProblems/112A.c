#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],i;
    gets(str1);
    gets(str2);
    int ret=stricmp(str1,str2);
    if(ret>0)
        printf("1\n");
    else if(ret<0)
        printf("-1\n");
    else
        printf("0\n");

    return 0;
}
