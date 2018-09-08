n = int(input())
ans = 1
a=[]
a = [int(x) for x in raw_input().split(" ")]
for i in a:
	ans *= i
print(ans)