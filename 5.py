import fractions

print fractions.gcd(2, 3)

ans = 2
for i in range(3, 21):
	ans = (ans * i)/fractions.gcd(i, ans)

print ans

