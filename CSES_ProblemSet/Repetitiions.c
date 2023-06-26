#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    fgets(str,sizeof(str),stdin);
    int count=1;
    int max=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==str[i+1]){
            count++;
            continue;
        }
        else if(count>max){
            max=count;
            count=1;
        }
        else{
            count=1;
        }
    }
    printf("%d",max);
    

    return 0;
}