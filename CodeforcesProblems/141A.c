#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200],c[200],temp1,temp2;
    gets(a);
    gets(b);
    gets(c);
    int i,j;
    strcat(a,b);
    int len1=strlen(a);
    int len2=strlen(c);
    for(i=0;i<len1;i++){
        for(j=0;j<len1-i-1;j++){
            if(a[j]>a[j+1]){
                temp1=a[j];
                a[j]=a[j+1];
                a[j+1]=temp1;
            }
        }
    }
    for(i=0;i<len2;i++){
        for(j=0;j<len2-i-1;j++){
            if(c[j]>c[j+1]){
                temp2=c[j];
                c[j]=c[j+1];
                c[j+1]=temp2;
            }
        }
    }
    int cmp=strcmp(a,c);
    if(cmp==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
