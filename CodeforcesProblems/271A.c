#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(1){
        a++;
        int b=a/1000;
        int c=(a/100)%10;
        int d=(a/10)%10;
        int e=(a%10);

        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
            break;
    }
    printf("%d",a);

    return 0;
}
