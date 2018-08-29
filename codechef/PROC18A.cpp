#include<bits/stdc++.h>
using   namespace   std;

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int n,k,sum=0,cou;
        cin >>  n   >>  k;
        int a[n];
        for(int j=0;j<n;j++)
            cin >>  a[j];

        for(int j=0;j<k;j++)
            sum=sum+a[j];
        int temp=sum;
        for(int j=k;j<n;j++){
            temp=temp+a[j]-a[j-k];
            if(temp>sum){
                sum=temp;
                }
        }
        cout    <<  sum <<"\n";

    }



    return 0;
}

