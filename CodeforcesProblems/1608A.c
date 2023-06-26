#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while (t--)
    {
        scanf("%d",&n);
        if(n==1)
            printf("1\n");
        else if(n>1){
            for(int i=2;i<=n+1;i++)
                printf("%d ",i);
            printf("\n");
        }
    }
    

    return 0;
}