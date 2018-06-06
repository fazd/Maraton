from collections import OrderedDict

n = input()
n = int(n)
lista = []
for i in range(0,n):
	str = input()
	lista.append(str)	

lista.sort() # sorts normally by alphabetical order
lista.sort(key=len) # sorts by descending length

sw = True;
for i in range (0,n-1):
	if lista[i+1].find(lista[i]) == -1:
		sw = False 
		break

if sw :
	print("YES")
	for i in range (0, n):
		print(lista[i])
else:
	print("NO")