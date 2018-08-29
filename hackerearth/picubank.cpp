#include<bits/stdc++.h>
using   namespace   std;

int main(){
    int t;
    cin >>  t   ;
    for(int i=0;i<t;i++){
        int d,a,m,b,x,mon=0;
        cin >>  d   >>  a   >>  m   >>  b   >>  x   ;
        x=x-d;
        while(x>=(a*m)){
            if(x-(a*m)>=0){
                mon=mon+m;
                x=x-a*m;
            }
            if(x-b>=0){
                mon++;
                x=x-b;
                }
        }
        mon=mon+(x/a)+1;





        cout    <<  mon <<"\n";
    }
    return  0;


}
