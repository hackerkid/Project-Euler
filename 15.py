
n = 20
count = [[0 for x in range(30)] for x in range(30)]

for i in range(20, -1, -1):
	for j in range(20, -1, -1):
		sum = 0
		if(i == n and j == n):
			count[i][j] = 1
			continue
	
		if (i == n):
			sum += count[i][j + 1]
	
		elif (j == n):
			sum += count[i+1][j]

		else:
			sum += count[i+1][j]
			sum += count[i][j+1]

		count[i][j] = sum

print count[0][0]
