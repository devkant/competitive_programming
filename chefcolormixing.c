#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n,count=0;
		int j;
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		for(int k=0;k<n-1;k++)
		{
			for(int l=0;l<n-k-1;l++)
			{
				if(a[k]==a[l])
					count++;
			}
		}
	printf("%d",count);


	}
return 0;
}
