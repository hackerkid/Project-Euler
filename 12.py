def factors(x):
	i = 2
	count = 0
	while (i * i <= x):
		if(x % i == 0):
			count += 2
		i = i + 1

	if(i * i == x):
		return count -1

	return count


i = 2

while 1:
	k = (i * (i+1)) / 2
	if(factors(k) > 500):
		break
	i = i + 1
	
print i

