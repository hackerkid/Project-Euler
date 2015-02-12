with open ("input/13.in", "r") as myfile:
    data=myfile.read().replace('\n', '')

i = 0;
x = len(data)
sum = 0

print x
while i < x:
	k = i % 50
	t = ord(data[i]) - ord('0')
	mul = 49 - k
	sum += t * pow(10,mul)
	i = i + 1

print sum

	

