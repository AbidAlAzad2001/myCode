#include<stdio.h>
int main()
{
    int a,odd=0,even=0,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        if(arr[i]%2==0)
            even++;
        else 
            odd++;
    }
    if(even==1){
        for(i=0;i<a;i++){
            if(arr[i]%2==0){
                printf("%d",i+1);
                break;
            }
        }
    }
    else if(odd==1){
        for(i=0;i<a;i++){
            if(arr[i]%2==1){
                printf("%d",i+1);
                break;
            }
        }
    }

    return 0;
}