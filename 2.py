x = 0
y = 1
sum = 0

while y <= 4000000:
	if y % 2 == 0:
		sum += y

	t = y
	y = y + x
	x = t

print sum

