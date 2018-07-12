#include<stdio.h>

int main(){
    int t;
    int i,j;
    scanf("%d",&t);
    for(int l=0;l<t;l++) {
        int n, k;
        int way=0;
        scanf("%d %d", &n, &k);
        int a[n];
        for (j = 0; j < n; j++)
            scanf("%d", &a[j]);
        for(i=0;i<n;i++) {
            int sum = a[i];
            int card = 1;
            if (sum >= k)
                way++;
            for(int s=i;s<n;s++){
                
            if (a[s + 1] - a[s] == 1){
                sum = sum + a[s + 1];
                card++;
                if( sum/card>=k)
                    way++;
            }
            else if(a[s+1]-a[s]!=1)
                break;
            
            
            }
        }
    printf("%d",way);
    printf("\n");

    }
    return 0;
}s