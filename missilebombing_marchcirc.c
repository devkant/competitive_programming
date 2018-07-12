{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int f[n][n];
    for(int l=0;l<n;l++)
    {   for(int m=0;m<n;m++)
            f[l][m]=0;
    }
    int p,a,b,c,d;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d %d %d",&p,&a,&b,&c,&d);
        for(int j=a-1;j<c-1;j++)
            {
                for(int k=b-1;k<d-1;k++)
                {
                    f[j][k]=f[j][k]+p;
                }
            }
    
    }
    for(int l=0;l<n;l++)
    {   for(int m=0;m<n;m++)
            printf("%d",f[l][m]);
        printf("\n");
    }
return 0;
}