#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int sum=0;
    for(i=0;i<n;i++)
        sum+=arr[i];
    int count=ceil((float)sum/4);
    printf("%d",count);

    return 0;
}