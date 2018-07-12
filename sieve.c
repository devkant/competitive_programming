#include<stdio.h>
#include<math.h>
int main()
{int n;
    scanf("%d",&n);



    char prime[n+1];
    for(int i=0;i<n+1;i++)
        prime[i]="T";
    int p;
    for(p=2;p<sqrt(n);p++)
    { if(prime[p]=="T")
        {
            for(int i=2*p;i<n;i=i+p)
            {
                prime[i]="F";
            }
        }

    }
    for (int j = 2; j <=n; ++j) {
        if(prime[j]=="F")
            printf("%d",j);

    }

    return 0;

}