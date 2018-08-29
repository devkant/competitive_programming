#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int n,m=0;
        cin >>  n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin >>  v[i].first  >>  v[i].second;
        }
        sort(v.begin(),v.end());

        for(int i=0;i<n;i++){
           int low=v[i].first;
           int tem=1;
           for(int  j=i+1;j<n;j++){
                if(v[i].first==v[j].first)
                    tem++;
                else    if(low>v[j].second)
                    tem++;

            }
            m=max(tem,m);


        }
        cout    <<  m   <<"\n";

    }
    return 0;

}
