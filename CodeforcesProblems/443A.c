#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int arr[200];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if('a'>=str[i]&&str[i]<='z'){
            arr[i]=str[i]
        }
    }

    return 0;
}
