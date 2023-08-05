n, m, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()
j, ans = 0, 0
for i in range(n):
    while j < m and b[j] < a[i] - k:
        j += 1
    if j < m  and b[j] <= a[i] + k:
        ans += 1
        j += 1

print(ans)        