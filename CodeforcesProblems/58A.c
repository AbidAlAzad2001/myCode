#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int i,n,l=0;
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++){
        if(str[i]=='h' && l==0)
            l++;
        else if(str[i]=='e' && l==1)
            l++;
        else if(str[i]=='l' && l==2)
            l++;
        else if(str[i]=='l' && l==3)
            l++;
        else if(str[i]=='o' && l==4)
            l++;
        if(l==5)
            break;
    }
    if(l==5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
