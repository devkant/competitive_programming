#include<bits/stdc++.h>
using   namespace   std;

int main(){
    string line;
    while(getline(cin,line)){
        int count=0,temp=0;
        for(int i=0;i<line.length();i++){
            if(line[i]=='/' && line[i+1]=='/'){
                break;
            }
            if(line[i]=='-'){
                if(line[i+1]=='>'){
                    line[i]='.';
                    line[i+1]='\0';
                }
            }
        }
        line.erase(remove(line.begin(),line.end(),'\0'),line.end());
        cout    <<line<<"\n";

    }
    return 0;
}
