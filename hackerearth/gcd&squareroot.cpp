#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        int n,m,x;
        cin >>  n   >>  m;
        int temp=sqrt(n);
        if(temp*temp!=n)
            cout    <<  1<<"\n";
        else{
            int a=0;
            while(true){
                if((m*a-temp)>=0){
                    cout    <<m*a-temp<<"\n";
                    break;
                }
                else    if((m*a+temp)>=0){
                    cout    <<m*a+temp<<"\n";
                    break;

                }
                a++;


            }
        }



    }
    return 0;







}
