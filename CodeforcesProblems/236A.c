#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int i,j,count=1;
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<len;i++){
        for(j=0;j<len-i-1;i++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=str[i+1])
            count++;
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
