def isprime(x):
	i = 2
	while i * i <= x:
		if(x % i == 0):
			return 0
		i = i + 1


	return 1



count = 0
i = 0
i = 2
while(count <= 10000):
	if(isprime(i)):
		count += 1
	
	i = i + 1

print (i-1)


	
