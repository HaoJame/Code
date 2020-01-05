import math
m,n=input().split()
#T=m-n
m=int(m)
n=int(n)
t=m-n
if ((t)%10==9):
	(t)-=1
else:
	(t)+=1
print(t)