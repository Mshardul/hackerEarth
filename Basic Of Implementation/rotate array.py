def rotateArray():
	a = [1,2,3]
	b = 10
	ret = []
	b = b%(len(a))
	m = len(a)
	for i in xrange(m):
		n = a[i]
		a.pop(i)
		ret.append(n)
	return ret
print(rotateArray())