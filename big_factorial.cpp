#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a;
        cin >>  a;
        int flag=0;
        int b=1;
        while(true){
        int c=a/int(pow(5,b)+0.5);
        b++;
        flag=flag+c;
        if(c==0)
            break;
        }
        cout    <<  flag<<"\n";



    }
    return 0;




}
