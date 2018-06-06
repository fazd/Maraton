import math 

x, y = map(int, input().split())
a =  math.log(x)/x
b =  math.log(y)/y
if abs(a - b) < 1e-10:
	print('=')
elif a < b:
	print('<')
else:
	print('>')