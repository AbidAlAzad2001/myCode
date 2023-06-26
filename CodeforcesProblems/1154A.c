#include<stdio.h>
int main()
{
    int i,j,temp,a[10];
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int b,c,d;
    d = a[3] - a[0];
    c = a[2] - d;
    b = a[3] - (c+d);
    printf("%d %d %d",b,c,d);


    return 0;
}
