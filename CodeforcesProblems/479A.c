#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int A=(a+b)*c;
    int B=a*(b+c);
    int C=(a*b)+c;
    int D=a*(b+c);
    int E=a+b+c;
    int F=a*b*c;
    int arr[6];
    arr[0]=A;
    arr[1]=B;
    arr[2]=C;
    arr[3]=D;
    arr[4]=E;
    arr[5]=F;
    int temp;
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d",arr[5]);


    return 0;
}