#include<bits/stdc++.h>
using   namespace   std;
int gcd(int a, int b)
{

    if (a == 0 || b == 0)
       return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,m;
        int p,q;
        cin >> n;
        m=(n/2)+(n%2);
        p=(int)(pow(10,m)+0.5);
        q= (int)(pow(10, n)+0.5);
        int g=gcd(p,q);
        p=p/g;
        q=q/g;
        cout << p<<" "<<q<<"\n";




    }

return 0;
}
