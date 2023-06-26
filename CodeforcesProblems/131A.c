#include"stdio.h"
#include"string.h"
int main()
{
    char str[101];
    int flag=0;
    scanf("%s",str);
    if('A'>=str[0] && str[0]<='Z'){
        for(int i=1;str[i]!='\0';i++){
            str[i]+=32;
        }
    }

    return 0;
}
