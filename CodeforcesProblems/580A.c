#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=1,max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1]){
            count++;
            continue;
        }
        if(count>max){
            max=count;
            count=1;
        }
    }
    printf("%d",max);

    return 0;
}