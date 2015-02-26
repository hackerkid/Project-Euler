from math import factorial as f
x = f(100)
sum = 0
while(x):
	sum += x % 10
	x = x / 10
print sum

