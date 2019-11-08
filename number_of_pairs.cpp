#include<bits/stdc++.h>
using namespace std;
int countGreater(int arr[], int n, int k) 
{ 
    int l = 0; 
    int r = n - 1; 
 
    int leftGreater = n; 
  

    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
  
        if (arr[m] > k) { 
            leftGreater = m; 
            r = m - 1; 
        } 

        else
            l = m + 1; 
    } 
  

    return (n - leftGreater); 
} 
int main(int argc, char const *argv[])
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int m,n;
		cin>>m>>n;
		int arr1[m];
		int arr2[n];
		for(int i=0;i<m;i++)
		{
			cin>>arr1[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>arr2[i];
		}
		long long int count=0;
		sort(arr2,arr2+n);
		for(int i=0;i<m;i++)
		{
			if(arr1[i]!=1)
			count=count+countGreater(arr2,n,arr1[i]);	
		}
		int onein2=0;
		int twoin2=0;
		int threein2=0;
		int fourin2=0;
		int onein1=0;
		int twoin1=0;
		int threein1=0;

		for(int i=0;i<n;i++)
		{
			if(arr2[i]==1)
			{
				onein2++;
			}
			if(arr2[i]==2)
			{
				twoin2++;
			}
			if(arr2[i]==3)
			{
				threein2++;
			}
			if(arr2[i]==4)
			{
				fourin2++;
			}
		}
		for(int i=0;i<m;i++)
		{
			if(arr1[i]==1)
			{
				onein1++;
			}
			if(arr1[i]==2)
			{
				twoin1++;
			}
			if(arr1[i]==3)
			{
				threein1++;
			}
		}

		count=count-fourin2*twoin1;
		count=count-threein2*twoin1;

		count=count+twoin2*threein1;

		count=count+onein2*(m-onein1);

		cout<<count<<"\n";
	}
	return 0;
}