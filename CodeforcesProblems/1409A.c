#include<stdio.h>
int main()
{
    int a,b,t,sum=0,mod=0,div=0,sub=0,temp;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        if(b>a){
            temp=a;
            a=b;
            b=temp;
        }
        sub=a-b;
        div=sub/10;
        mod=sub%10;
        sum=div;
        if(mod>0)
            sum++;
        printf("%d\n",sum);
    }

    return 0;
}
