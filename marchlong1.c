#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    { int n;
        scanf("%d",&n);
        int l[n],j;
        for(j=0;j<n;j++)
            scanf("%d",&l[j]);
        int g[n];
        for(j=0;j<n;j++)
            scanf("%d",&g[j]);

        int flag=0;
        int flag1=0;

        for(int k=0;k<n;k++)
        {
            if(l[k]<=g[k])
                flag++;
            if(l[k]<=g[n-1-k])
                flag1++;

        }
        if(flag==n && flag1==n)
            printf("both");
        else if(flag==n)
            printf("front");
        else if(flag1==n)
            printf("back");
        else
            printf("none");


    }

    return 0;

}