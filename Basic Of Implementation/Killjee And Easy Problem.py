def get_array(i, res):
	lst = list(set(dic[i]) - set(res))
	if lst==[] or lst==None:
		return res
	i=lst[0]
	res.append(i)
	res=get_array(i, res)
	return res

if __name__ == '__main__':
	global n
	n, m = map(int, raw_input().split())
	global dic
	dic = {}
	res = []
	for i in range(m):
		a, b = map(int, raw_input().split())
		if a in dic:
			if b not in dic[a]:
				dic[a].append(b)
		else:
			dic[a]=[b]
		if b in dic:
			if a not in dic[a]:
				dic[b].append(a)
		else:
			dic[b]=[a]
	for i in dic:
		res.append(i)
		res = get_array(i, res)
		break
	print len(res)
	print res

