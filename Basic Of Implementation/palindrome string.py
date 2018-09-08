st = raw_input()
n = len(st)/2
i=0
pal=1
while(i<n):
	if(st[i]!=st[-(i+1)]):
		pal=0
		break
if(pal==1):
	print("YES")
else:
	print("NO")