#include<bits/stdc++.h>
using   namespace   std;

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int n,m,flag=0;
        cin >> n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%m==0)
                flag++;
            }
        cout << int(pow(2,flag)+0.5)-1<<"\n";

    }
    return 0;

}
