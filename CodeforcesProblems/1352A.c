#include<stdio.h>
int main()
{
    int n,t,i,j,temp,cnt,r,b[10],x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++)
    {
        temp=a[i];
        j=0;
        cnt=0;
        x=1;
        while(temp)
        {
            r=temp%10;
            if(r)
            {
                cnt++;
                b[j++]=r*x;
            }
            x*=10;
            temp/=10;
        }
        printf("%d\n",cnt);
        for(j=0;j<cnt;j++)
            printf("%d ",b[j]);
            printf("\n");
    }
}
