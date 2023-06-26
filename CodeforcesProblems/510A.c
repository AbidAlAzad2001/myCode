#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,oddness=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<m;j++){
                printf("#");
            }
        }
        else{
            oddness++;
            for(j=0;j<m;j++){
                if(oddness%2==1&&j==m-1)
                    printf("#");
                else if(oddness%2==0&&j==0)
                    printf("#");
                else
                    printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
