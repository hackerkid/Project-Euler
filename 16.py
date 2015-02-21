i = 1000
x = 1
while x:
	x = pow(2, i)
	sum = 0
	while(x):
		sum += x % 10
		x = x / 10

	print sum
	x = 0

