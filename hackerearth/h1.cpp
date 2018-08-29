#include<bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y, int p)
{
    int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int n,k;
        long long prod=1;
        cin >>  n   >>  k;
        if(n%k==0)
            prod=power(n/k,k,100000007);
        else{
            int diff=n;
            while(k>=2){
                if(diff%k==0){
                    prod=(prod%100000007)*power(diff/k,k);
                    break;
                }
                int r=n/k;
                prod=(prod%100000007)*(r%100000007);
                diff=diff-r;
                k--;
                if(k==1){
                prod=prod*diff;}

            }

        }
        cout    <<  prod%100000007<<"\n";


    }

return 0;
}
