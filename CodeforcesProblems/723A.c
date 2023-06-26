#include<stdio.h>
int main()
{
    int a[10];
    int i,j,temp;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int sum=0;
    sum=a[2]-a[0];
    printf("%d",sum);

    return 0;
}
