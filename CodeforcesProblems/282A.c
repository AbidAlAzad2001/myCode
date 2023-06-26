#include<stdio.h>
#include<string.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    char str[150];
    gets(str);
    for(i=0;i<n;i++){
        gets(str);
        if((str[0]=='-'&&str[1]=='-')||(str[1]=='-'&&str[2]=='-'))
            c--;
        if((str[0]=='+'&&str[1]=='+')||(str[1]=='+'&&str[2]=='+'))
            c++;
    }
    printf("%d\n",c);

    return 0;
}
