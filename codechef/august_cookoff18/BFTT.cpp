#include<bits/stdc++.h>
using   namespace   std;

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        long long int n;
        cin >>  n;
        long long j=n+1;
        while(true){
            long long int t=j;
            int v=0;
            while(t>0){
                int r=t%10;
                if(r==3)
                    v++;
                t=t/10;
                if(v==3)
                    break;


            }
            if(v==3)
                break;

            j++;

        }
        cout    <<  j<<"\n";


    }

    return  0;
}



