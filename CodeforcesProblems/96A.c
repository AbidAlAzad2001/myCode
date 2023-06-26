#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int i,count=1,max=0,max1=0,count1=1;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='0'&str[i+1]=='0'){
            count++;
        }
        else{
            if(max<=count)
                max=count;
            count=1;
        }
        if(str[i]=='1'&str[i+1]=='1')
            count1++;
        else{
            if(max1<=count1)
                max1=count1;
            count1=1;
        }
    }
    if(max>=7||max1>=7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
