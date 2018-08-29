#include<bits/stdc++.h>
using   namespace   std;

int days(char a,char b){
    int day;
    int diff;
    if(b>a)
        diff=b-a;
    else if(a>b)
        diff=26-(a-b);
    day=(diff/13)+(diff%13);
    return day;



}

int main(){
    int n,minday=0;
    cin >>  n;
    string  a,b;
    cin >>  a;
    cin >>  b;
    for(int i=0;i<n;i++){
        minday=minday+days(a[i],b[i]);
    }
    cout    <<minday;
    return  0;



}
