#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char str[n];
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }
    puts(str);

    return 0;
}
