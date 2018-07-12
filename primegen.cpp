#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>  t;
    for(int s=0;s<t;s++){
        int a,b;
        cin >> a >> b;
        char prime[b+1];

    for(int i=0;i<b+1;i++)
        prime[i]='T';
    int p;
    for(p=2;p<sqrt(b);p++)
        { if(prime[p]=='T')
            {
            for(int i=2*p;i<=b;i=i+p)
                {
                prime[i]='F';
                }
            }

        }
        prime[1]='F';

        for (int j = a; j <=b; ++j) {
        if(prime[j]=='T')
            cout    <<  j<<"\n";
        }
        cout << "\n";


    }

}
