t=int(input())

a = [int(x) for x in input().split()]
b=sorted(a,reverse=True)
s=sum(a)
flag=0
c=0
for j in range(0,t):
	c=c+int(b[j])
	flag=flag+1
	if c>s/2:
		break
print(flag)