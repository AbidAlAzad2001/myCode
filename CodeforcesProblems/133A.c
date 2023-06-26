#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int flag=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
            flag=1;
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}