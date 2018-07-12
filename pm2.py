n,k=input().split()
y=[int(x) for x in input().split()]
z=sorted(y)
flag=0
for i in range(0,int(n)):
	if 5-y[i]>=int(k):
		flag+=1
print(int(flag/3))

