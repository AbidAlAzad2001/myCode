#include<stdio.h>
int main()
{
    int  t;
    scanf("%d",&t);
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            scanf("%d",&arr[i]);
        }
        int temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3-i-1;j++){
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        printf("%d\n",arr[1]);
    }

    return 0;
}
