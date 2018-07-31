#include<bits/stdc++.h>
using namespace std;
map<int,long long> dp;

long long solve(int n){
        if(n<12)
            return n;
        if(dp.count(n))
            return dp[n];
        dp[n]=solve(n/2)+solve(n/3)+solve(n/4);
        return dp[n];






}

int main(){
int n;
while(cin >> n){



    cout    <<  solve(n)<<"\n";
    }
    return 0;

}
