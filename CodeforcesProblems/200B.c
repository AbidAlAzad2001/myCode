#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float sum=0;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%.12f\n",sum/n);

    return 0;
}
