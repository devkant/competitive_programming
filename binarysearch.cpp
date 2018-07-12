#include<bits/stdc++.h>
using   namespace   std;
int q,n;

int main(){

    scanf ("%d%d", &n, &q);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<q;i++){
        int x;
        scanf("%d",&x);
        int result=-1;
        int left=0,right=n-1;
        int mid;
        while(left<=right){
            mid=(left+right)/2;
            if(arr[mid]==x){
                result=mid;
                right=mid-1;
            }
            else if(x<arr[mid]){
                right=mid-1;
            }
            else
                left=mid+1;
            }

    printf("%d\n",result);

    }
    return 0;

}
