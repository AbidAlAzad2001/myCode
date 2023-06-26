#include<stdio.h>
int main()
{
    int n,i,j,temp,sum1=0,sum2=0,count=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum1+=arr[i];
    }
    sum1=sum1/2;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=n-1;i>=0;i--){
        sum2+=arr[i];
        count++;
        if(sum1<sum2)
        break;
    }
    printf("%d",count);

    return 0;
}