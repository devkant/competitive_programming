#include<bits/stdc++.h>
using namespace std;
#define ll 1000000007
int nCrModpDP(int n, int r, int p) 
{ 
    int C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = min(i, r); j > 0; j--) 
  
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 
int nCrModpLucas(int n, int r, int p) 
{ 
   if (r==0) 
      return 1; 

   int ni = n%p, ri = r%p; 
   return (nCrModpLucas(n/p, r/p, p) *  
           nCrModpDP(ni, ri, p)) % p;   
} 
int main(int argc, char const *argv[])
{
	long long int n,k;
	cin>>n>>k;

	long long int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	long long int result=1+n;

    sort(arr,arr+n);

    int freq[n];
    int current=arr[0];
    int cc=0;
    freq[cc++]=1;
    for(int i=1;i<n;i++)
    {
        if(current==arr[i])
        {
            freq[cc-1]++;
        }
        else
        {
            freq[cc++]=1;
            current=arr[i];
        }
    }
long long int bresult=0;
	for(int i=2;i<=k;i++)
	{
		result=result+nCrModpLucas(n,i,ll);
        result%=ll;

        for(int j=0;j<cc;j++)
        {
            if(freq[j]>=i)
            {
                bresult+=nCrModpLucas(freq[j],i,ll);
                bresult%=ll;
            }
        }

	}
    cout<<result<<" "<<bresult<<"\n";
    result=((result-bresult)+ll)%ll;
	cout<<result<<"\n";




	return 0;
}