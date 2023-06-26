#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int count,rem;
    if(a>=b){
        rem=a-b;
        count=rem/2;
        printf("%d %d",b,count);
    }
    else if(a<=b){
        rem=b-a;
        count=rem/2;
        printf("%d %d",a,count);
    }

    return 0;
}
