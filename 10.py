sum = 0

def isprime(x):
	i = 2
	while i * i <= x:
		if(x % i == 0):
			return 0
		i = i + 1


	return 1

for i in range(2, 2000000):
	if(isprime(i)):
		sum += i

print sum

