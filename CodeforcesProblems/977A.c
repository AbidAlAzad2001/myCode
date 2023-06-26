#include<stdio.h>
int main()
{
    int n,k;
    int count=0,rem;
    scanf("%d%d",&n,&k);
    while(n!=0){
        rem=n%10;
        if(count==k)
            break;
        else if(rem!=0){
            n=n-1;
            count++;
        }
        else if(rem==0){
            n=n/10;
            count++;
        }
    }
    printf("%d",n);

    return 0;
}