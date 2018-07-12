#include <stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	for(i=0;i<t-1;i++)
		{	
			for(int k=0;k<t-i-1;k++)
				{	
					if(a[i]>a[i+1])
					{	int temp;
						temp=a[i];
						a[i]=a[i+1];
						a[i+1]=temp;
					}		


				}



		}
		
	

	int flag=0,sum=0,nsum=0;
	for(i=t-1;i>=0;i--)
	{   flag++;
	    sum=sum+a[i];
	    nsum=0;
		for(int j=0;j<i;j++)
		{
			nsum=nsum+a[j];
		}
		
	if(sum>nsum)
		{	
			printf("%d",flag);
			break;
		}
	}

return 0;

}