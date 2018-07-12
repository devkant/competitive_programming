#include<bits/stdc++.h>
using   namespace   std;

int main(){
    while(true){
        int n;
        cin >>  n;
        if(n==-1)
            break;
        int avg,sum=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin >>  a[i];
            sum =   sum+a[i];
            }
        avg=sum/n;
        int dif=0;
        if(sum%n!=0)
            cout    <<"-1"<<"\n";
        else if(sum%n==0){
            for(int i=0;i<n;i++){
                dif=dif+abs(avg-a[i]);
            }
            cout    <<dif/2<<"\n";

        }



    }
    return 0;


}
