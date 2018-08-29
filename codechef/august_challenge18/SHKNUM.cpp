#include<bits/stdc++.h>
using   namespace   std;

int main(){
    int t;
    cin >>  t;
    for(int s=0;s<t;s++){
        long long int n;
        cin >>  n;
        if(n<3)
            cout    <<3-n<<"\n";
        else{

        int binaryNum[1000];
        int m=n;
        // counter for binary array
        int i = 0;
        while (n > 0) {

        // storing remainder in binary array
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
        i--;
        int imp=0;
        for(int u=i-1;u>=0;u--){
            if(binaryNum[u]==1){
                imp=u;
                break;
            }
            else
                imp=-1;

        }

        if(imp==-1){
            cout    <<1<<"\n";}
        else{
            long long int a=m-(pow(2,i)+pow(2,imp));
            long long int c=(pow(2,i+1)+1)-m;
            if(imp+1<i){
                long long int b=abs((pow(2,i)+pow(2,imp+1))-m);
                if(a<b){
                    if(a<c)
                        cout    <<a<<"\n";
                    else
                        cout    <<c<<"\n";
                }
                else    if(b<c){
                    cout    <<b<<"\n";
                }
                else
                    cout    <<c<<"\n";


            }

            else{
                if(a<c)
                    cout    <<a<<"\n";
                else
                    cout    <<c<<"\n";
            }

            }
        }


    }
    return 0;


}
