import math
def isprime(k):
	for i in range(2, int(math.sqrt(k))+1):
		if k % i == 0:
			return 0

	return 1



x = 600851475143
n = int(math.sqrt(x))
maxi = -1


for t in range(2, n+1):
	if (x % t == 0):
		if(isprime(t)):
			maxi = max(maxi, t)

		if(isprime(x/t)):
			maxi = max(maxi, x/t)

		

		

	t += 1

print maxi



	


