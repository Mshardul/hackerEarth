# def mult(a, b):
# 	a = a[::-1]
# 	b = b[::-1]
# 	res = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
# 	c_mult = 0
# 	cross = 0
# 	ind = 0
# 	for i in b:
# 		ind = 0
# 		c_add = 0
# 		c_mult = 0
# 		for j in a:
# 			m = c_mult+(i*j) + res[cross + ind]
# 			c_mult = m/10
# 			m = (m%10)
# 			res[cross+ind] = m
# 			ind += 1
# 		while(c_mult!=0):
# 			res[cross+ind] = c_mult%10
# 			c_mult /= 10
# 			ind += 1
# 		print res
# 		cross += 1
# 	res = res[::-1]
# 	i=0
# 	while(i<len(res)):
# 		if(res[i]==0):
# 			res.pop(i)
# 		else:
# 			break
# 	return res
#
#
# def add(a, b):
# 	res = []
# 	a = a[::-1]
# 	b = b[::-1]
# 	m = len(a)
# 	n = len(b)
# 	mn = min(m,n)
# 	c = 0
# 	for i in range(mn):
# 		ad = a[i]+b[i]+c
# 		c = ad/10
# 		ad = ad%10
# 		res.append(ad)
# 	if(m>mn):
# 		for i in range(mn,m):
# 			ad = b[i]+c
# 			c = ad/10
# 			ad = ad%10
# 			res.append(ad)
# 	if(n>mn):
# 		for j in range(mn, n):
# 			ad = a[i]+c
# 			c = ad/10
# 			ad = ad%10
# 			res.append(ad)
# 	res.append(c)
# 	res = res[::-1]
# 	return res
#
# def check(a,b):
# 	m = len(a)
# 	n = len(b)
# 	if(m<n):
# 		return True
# 	elif m>n:
# 		return False
# 	else:
# 		for i in range(n):
# 			if(a[i]<b[i]):
# 				return True
# 		return False

def binary_search(l, r, val_mid):
	print("l = " + str(l) + " r = " + str(r) + " mid = " + str(val_mid) + "\n")
	if l>=r:
		# print "returning value" + str(val_mid)
		return val_mid
	mid = (l+r)/2
	sec = n-mid
	val_mid = mid*mid*mn + sec*sec*mx
	val_mid_l = (mid-1)*(mid-1)*mn + (sec+1)*(sec+1)*mx
	val_mid_r = (mid+1)*(mid+1)*mn + (sec-1)*(sec-1)*mx
	if(val_mid_l<val_mid):
		binary_search(l, mid-1, val_mid_l)
	elif(val_mid_r<val_mid):
		binary_search(mid+1, r, val_mid_r)
	else:
		return val_mid

t = int(input())
answers = []
for i in range(t):
	n, a, b = map(int, raw_input().split())
	mn = min(a,b)
	mx = max(a,b)
	try:
		ans = binary_search(0, n, 0)
		print(ans)
	except Exception as e:
		print e
	


'''sahi code, but not optimized

t = int(input())
answers = []
for i in range(t):
	n, a, b = map(int, raw_input().split())
	ans = 0
	mn = min(a,b)
	mx = max(a,b)
	ans = n*n*mn
	j = 1
	while j<n:
		this = j*j*mx + (n-j)*(n-j)*mn
		if this < ans:
			ans = this
		else:
			break
		j+=1
	answers.append(ans)
for ans in answers:
	print ans

'''




'''

# t = int(input())
# for i in range(t):
# 	n, a, b = map(list, raw_input().split())
# 	n = [int(i) for i in n]
# 	a = [int(i) for i in a]
# 	b = [int(i) for i in b]
#
# 	print(n)
# 	print(a)
# 	print(b)
#
# 	tot = mult(mult(n,b),b)
# 	loop = [0]
# 	loop2 = n
# 	while (check(loop, n)):
# 		x = add(mult(a,mult(loop, loop)), mult(b, mult((n-i), (n-i))))
# 		if check(x,tot):
# 			tot = x
# 	add(loop, [1])
# 	print(tot)
'''

