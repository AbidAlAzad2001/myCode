#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,arr[100],count=0,temp;
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='+')
            continue;
        else
            arr[count++]=str[i]-'0';
    }
    for(i=0;i<count;i++){
        for(j=0;j<count-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<count;i++){
        printf("%d",arr[i]);
        if(i==count-1)
            break;
        printf("+");
    }

    return 0;
}
