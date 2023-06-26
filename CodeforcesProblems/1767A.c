#include<stdio.h>
int main()
{
    int t,x[3],y[3];
    scanf("%d",&t);
    while(t--){
            printf("\n");
        for(int i=0;i<3;i++)
            scanf("%d%d",&x[i],&y[i]);
        if(x[0]!=x[1] && x[0]!=x[2] && x[1]!=x[2])
            puts("YES");
        else if(y[0]!=y[1] && y[0]!=y[2] && y[1]!=y[2])
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
