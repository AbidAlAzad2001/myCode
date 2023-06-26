#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int time=240-k;
    int count=0;
    int sum=0;
    for(i=1;i<=n;i++){
        sum+=i*5;
        if(sum<=time)
            count++;
    }
    printf("%d",count);

    return 0;
}
