a=str(input())
z=len(a)
flag=0
count=0
for i in range(0,z):
    if a[i]=="a" or a[i]=="i" or a[i]=="0" or a[i]=="u" or a[i]=="e":
        flag+=1
   	if a[i]!="a" or a[i]!="i" or a[i]!="0" or a[i]!="u" or a[i]!="e":
    	if flag>count:
        	count=flag
        flag=0
        
print(count)