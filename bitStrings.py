n = int(input())

s = 1
for _ in range(n):
    s = int(2*s%int(1e9+7))
print(s)
