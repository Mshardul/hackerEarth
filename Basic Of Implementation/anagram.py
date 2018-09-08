'''
# Sample code to perform I/O:

name = raw_input()          # Reading input from STDIN
print 'Hi, %s.' % name      # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here

n = int(raw_input())
for i in range(n):
	a = list(str(raw_input()))
	b = list(str(raw_input()))
	n = len(a)
	j = 0
	while (j < n):
		if (a[j] in b):
			ind = b.index(a[j])
			del a[j]
			del b[ind]
			n -= 1
		else:
			j += 1
	print(a,b)
	print(len(a) + len(b))
