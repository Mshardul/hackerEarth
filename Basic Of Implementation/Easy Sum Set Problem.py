import copy

n = int(input())
a = map(int, raw_input().split())


m = int(input())
c = map(int, raw_input().split())

c_copy = copy.deepcopy(c)

to_add = set()
not_to_add = set()

len_c = len(c)-1
while len_c>=0:
	# print(len_c, c_copy)
	for i in a:
		delete = 1
		print(len_c, c_copy)
		ele_to_add = c_copy[len_c] - i
		remove_from_c = []
		if ele_to_add in not_to_add:
				continue
		for j in a:
			add = ele_to_add + j
			if add not in c:
				delete = 0
				remove_from_c = []
				not_to_add.add(ele_to_add)
				break
			remove_from_c.append(add)
		if delete==1:
			to_add.add(ele_to_add)
			c_copy = [x for x in c_copy if x not in remove_from_c]
			len_c = len(c_copy) - 1
		if len_c<0:
			break
	if len_c<0:
		break
for i in to_add:
	print i