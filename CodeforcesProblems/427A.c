#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,count=0;
    for(i=0;i<n;i++){
        if(arr[i]>0)
            sum+=arr[i];
        else if(sum>0)
            sum--;
        else
            count++;
    }
    printf("%d",count);

    return 0;
}
