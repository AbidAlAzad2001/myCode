#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i;
    scanf("%d%d",&n,&t);
    char str[n];
    scanf("%s",str);
    while(t--){
        for(i=1;i<n;i++){
            if(str[i]=='G'&&str[i-1]=='B'){
                str[i]='B';
                str[i-1]='G';
                i++;
            }
        }
    }
    printf("%s",str);

    return 0;
}
