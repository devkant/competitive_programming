#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int h[n][n],v[n][n];
    int sumh=0,sumv=0,sum=0;
    int i,j;
    for(i=0;i<n;i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &h[i][j]);
            sumh=sumh+h[i][j];
        }
    }
    for(i=0;i<n;i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &v[i][j]);
            sumv=sumv+v[i][j];
        }
    }
    /** for vertical*/
    int sum1=sumv;
    for(i=n-1;i>=0;i--){
        for(j=n-1;j>=0;j--) {
            sum1=sum1-v[i][j]+h[i][j];
            if(sum1>sum);
                sum=sum1;

                        }
    }

    int sum2=sumh;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) {
            sum2=sum2-h[j][i]+v[j][i];
            if(sum2>sum);
            sum=sum2;

        }
    }
    printf("%d",sum);
    return 0;


}
