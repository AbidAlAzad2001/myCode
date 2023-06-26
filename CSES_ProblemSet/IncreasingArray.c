#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            sum+=arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }
    }
    printf("%lld",sum);

    return 0;
}