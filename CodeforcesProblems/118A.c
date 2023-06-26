#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='A'&&str[i]!='a'&&str[i]!='E'&&str[i]!='e'&&str[i]!='I'&&str[i]!='i'&&str[i]!='O'&&str[i]!='o'&&str[i]!='U'&&str[i]!='u'&&str[i]!='Y'&&str[i]!='y'){
            if(str[i]<='Z')
                str[i]+=32;
                printf(".%c",str[i]);
        }
    }

    return 0;
}
