#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int a,b,c;
        cin >>  a   >>  b   >>  c;
        if(a==0 &&  b==0  &&  c==0)
            break;
        if((c-b)==(b-a)){
            cout    <<"AP"<<" "<<  c+(b-a);


        }
        else if((c/b)==(b/a)){
            cout    <<"GP"  <<" "<<  c*b/a;
        }
        cout    <<"\n";

    }
    return 0;
}
