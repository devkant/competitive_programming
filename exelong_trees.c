#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n, flag = 2;
        scanf("%d", &n);
        long x[n], h[n];
        long x2[n],h2[n];
        
        for (int j = 0; j < n; j++){
            scanf("%ld %ld", &x[j], &h[j]);
            x2[j]=x[j];
            h2[j]=h[j];
        }
        for (int k = 1; k < n-1; k++) {
            if (x[k - 1] < x[k] - h[k]) {
                x[k] = x[k];
                flag++;
            }else if (x[k] + h[k] < x[k + 1]) {
                x[k] = x[k] + h[k];
                flag++;
            }
            
        }
        int flag2=2;
        for (int k = n-1; k <=0; k--) {
            if (x2[k] + h2[k] < x2[k + 1]) {
                x2[k] = x2[k];
                flag2++;
            }
            else if (x2[k - 1] < x2[k] - h2[k]) {
                x2[k] = x2[k]-h2[k];
                flag2++;
            }
        }
        
    if(flag>flag2)    
        printf("%d\n",flag);
    else if(flag2>flag)
        printf("%d",flag2);

    }
    return 0;
}
    
    
    





