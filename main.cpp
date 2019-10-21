#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#define llint_min -9223372036854775808
#define llint_max 9223372036854775807
#define int_min -2147483648
#define int_max 2147483647
#define ll long long int
using namespace std;

int main()
{
	ll tt;
	cin >> tt;
	for (ll yy=0;yy<=tt-1;yy++)
	{
		ll n,m,q;
		cin >> n >> m >> q;
		ll row[n];
		ll column[m];
		for (ll i=0;i<=n-1;i++)
		{
			row[i]=0;
		}
		for (ll i=0;i<=m-1;i++)
		{
			column[i]=0;
		}

		for (ll z=0;z<=q-1;z++)
		{
			ll a,b;
			cin >> a >> b;
			row[a-1]++;
			column[b-1]++;
		}


		ll row_even=0;
		ll row_odd=0;
		ll column_even=0;
		ll column_odd=0;
		for (ll i=0;i<=n-1;i++)
		{
			if (row[i]%2==0)
			{
				row_even++;
			}
			else
			{
				row_odd++;
			}
		}
		for (ll i=0;i<=m-1;i++)
		{
			if (column[i]%2==0)
			{
				column_even++;
			}
			else
			{
				column_odd++;
			}
		}


		cout << (row_odd*column_even)+(column_odd*row_even) << endl;
	}

	return 0;
}
		