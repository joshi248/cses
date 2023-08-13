n = int(input())
mod = 10**9 + 7
ans = 0
i = 1
while i <= n:
    r = n // i
    ans = (ans + (n // i) * (r * (r + 1) // 2 - i * (i - 1) // 2)) % mod
    i = r + 1
print(ans)
