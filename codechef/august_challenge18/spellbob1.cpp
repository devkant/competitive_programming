#include<bits/stdc++.h>
using   namespace   std;
int main(){
    int t;
    cin >>  t;
    for(int i=0;i<t;i++){
        char a[3][2];
        int B=0,O=0;
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                cin >>  a[k][j];
            }
        }
        for(int j=0;j<3;j++){
            if(a[j][0]=='b' || a[j][1]=='b' )
                B++;
            if(a[j][0]=='o' ||  a[j][1]=='o')
                O++;
            if(a[j][0]!='b' && a[j][1]!='b' && a[j][0]!='o' && a[j][1]!='o'){
                cout    <<"no"<<"\n";
                break;
            }



            if(j==2){
                if(B>=2 && O>=1)
                    cout    <<"yes"<<"\n";
                else
                    cout    <<"no"<<"\n";


            }
        }
    }



    return  0;

}


