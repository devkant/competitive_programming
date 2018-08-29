#include<bits/stdc++.h>
using namespace std;
int least(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return i;


    }
    return 0;


}

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int n,k;
        int sum=0;
        cin >>  n   >>  k;
        while(k>1){
            int f=least(n);
            if(f==0){
                cout    <<-1<<"\n";
                break;
            }
            else{
                sum=sum+f;
                n=n/f;
                k--;
            }
            if(k==1){
                sum=sum+n;
                cout    <<  sum<<"\n";
            }



        }



    }
    return 0;
}
