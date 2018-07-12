#include<bits/stdc++.h>
using   namespace   std;

int grid(int n){

    if(n==1)
        return 1;
    else
        return  (n*n)+grid(n-1);
}



int main(){

    while(true){
        int a;
        cin >>  a;
        if(a==0)
            break;
        cout    <<  grid(a)<<"\n";

    }
    return  0;

}
