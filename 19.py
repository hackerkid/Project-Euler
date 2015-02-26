from calendar import monthrange as m
x = 1
count = 0
for year in range(1901, 2001):
	for month in range(1, 13):
		n = m(year, month)[1]
		for days in range(1, n + 1):
			if(x == 6 and days == 1):
				count = count + 1
			x = (x + 1) % 7 

print count

