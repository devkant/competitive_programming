#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++)
    {   int a,b;
        cin >>  a   >>  b   ;
        int ar=0,br=0;
        while(a>0){
            if(a>0)
                ar  =   (ar*10)  +   a%10;
            a=a/10;

        }
        while(b>0) {
            if (b > 0)
                br = (br * 10) + b % 10;
            b=b/10;
        }
        int sum=ar+br;
        int sumr=0;
        while(sum>0){
            sumr=(sumr*10)+sum%10;
        }






        cout <<sumr<<"\n";

    }
    return 0;




}
