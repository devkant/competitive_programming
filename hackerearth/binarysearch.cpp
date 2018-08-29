#include<bits/stdc++.h>

using namespace std;
int binary(int  a[],int   n,int x,int OK){
    int left=0;
    int right=n-1;
    int mid=(left+right)/2;
    int result=-1;
    while(left<=right){
        if(x==a[mid]){
            result=mid;
            if(OK==1)
                right=mid-1;
            if(OK==0)
                left=mid+1;
        }
        else    if(x<a[mid])
            right=mid-1;
        else
            left=mid+1;
        if(left>right && result==-1){
            if(OK==0)
                result=left;
            if(OK==1)
                result=right;

        }

    }
    return result;
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);







    return 0;

}
