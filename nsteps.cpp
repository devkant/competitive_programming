#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int x,y;
        cin >>x >>y;
        if(y==x && x>=0){
            if(x%2==0)
                cout << x/2*4 <<"\n";
            else
                cout << int(x/2)*4+1<<"\n";
            }

        else if(y==(x-2)   &&  x>=2){
            if(x%2==0)
                cout << 2+(int((x-2)/2)*4)<<"\n";
            else
                cout << 2+(int((x-2)/2)*4)+1<<"\n";
            }
        else
            cout <<"No Number"<<"\n";






    }


}
