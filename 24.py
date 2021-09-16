import itertools

nums = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]

num = 0
for perm in itertools.permutations(nums):
    num += 1

    if num == 1000000:
        print("".join(perm))
        break
