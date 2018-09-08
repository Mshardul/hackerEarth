'''
# Sample code to perform I/O:

name = raw_input()          # Reading input from STDIN
print 'Hi, %s.' % name      # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
n = int(raw_input())
a=[]
b=[]
a = arr = map(int, raw_input().split())
for i in range(n):
    for j in range(i+1,n+1):
        st=[i,j]
        b.append(st)
print("*"*5)
print(b)
for i in b:
    x = get_xor(a[i[0],i[1]])
    total+=x
max=0
this=0
for i in range(0,n):
    for j in b:
        if i>=j[0] and i<=j[1]:
            this+=get_xor(a[j[0],j[1]])
    this+=(total-n)
    if(this>max):
        max=this
print(max)

def get_xor(a):
    res=bool(a[0])
    for i in range(1,len(a)):
        res = res!=bool(a[i])
