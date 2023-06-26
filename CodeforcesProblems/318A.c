#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if(a/2>=b)
        printf("%lld",(2*b-1));
    else 
        printf("%lld",((a-(b/2 + 1))*2));

    return 0;
}