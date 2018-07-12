#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,j;
        float l;
        scanf("%d",&n);
        float p[n],q[n],d[n];
        for(j=0;j<n;j++)
        {   float s=0,m=0;
            scanf("%f%f%f",&p[j],&q[j],&d[j]);
            s=p[j]+(p[j]*d[j]/100);
            m=p[j]-(s-(s*d[j]/100));
            l=m*q[j]+l;


        }
    printf("%f\n",l);





    }

    return 0;

}
