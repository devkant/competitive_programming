t=int(input())
a=list(map(int,input().split(' ')))
l=max(a)
n=min(a)
count=0
for i in range(n+1,l):
	for j in range(0,t):
		if i==a[j]:
			count+=1
			break
if count==l-n:
	print("YES")
else:
	print("NO")
	
	
			

