#include<stdio.h>
int main()
{
    long long int n,a,sum=0,i;
    scanf("%lld",&n);
    for(i=0;i<n-1;i++){
        scanf("%lld",&a);
        sum+=a;
    }
    long long int sum1=(n*(n+1))/2;
    sum1=sum1-sum;
    printf("%lld",sum1);
    

    return 0;
}