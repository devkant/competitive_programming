#include<bits/stdc++.h>
using   namespace   std;

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int n,sum=0;
        cin >>  n;
        int a[n],b[n];
        for(int j=0;j<n;j++)
            cin >>  a[j];
        for(int j=0;j<n;j++){
            cin >>  b[j];
            }
        sort(a,a+n);
        sort(b,b+n);
        for(int j=0;j<n;j++)
            sum=sum+a[j]*b[j];

        cout    << sum<<   "\n";


    }
    return  0;


}
