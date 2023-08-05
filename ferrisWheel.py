n, x = map(int, input().split())
v = list(map(int, input().split()))
l, r, ans = 0, n - 1, 0
v.sort()
while l < r:
    while l < r and v[l] + v[r] > x:
        r -= 1

    if l >= r:
        break
    ans += 1
    l += 1
    r -= 1

print(n - ans)

