def ispali(x):
	temp = x
	sum = 0
	i = 1;
	while temp:
		i = i *10
		temp = temp /10

	temp = x

	while temp:
		sum += (temp % 10) * i
		i /= 10
		temp /= 10

	sum = sum / 10
	return x == sum

maxi = 3
for i in range(10000,1000, -1):
	for j in range(i, 1000, -1):
		b = i * j
		if(ispali(b)):
			maxi = b
			break


print maxi

