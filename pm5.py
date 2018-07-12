    n,q=map(int,input().split(' '))
    n=[int(x),x ]
    for i in range(q):
        a,b,c=map(int,input().split(' '))
        if a==1:
            n[b]=c
        else:
            if b>=0 and c<len(n):
                print(sum(n[b:c+1]))
            else:
                print(-1)