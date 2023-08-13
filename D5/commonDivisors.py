t = int(input())
freq = [0 for _ in range(int(1e6) +1)]
arr = list(map(int, input().split()))
for i in range(t):
    freq[arr[i]] += 1

i = int(1e6)
while i > 0:
    d = 0
    for j in range(i, int(1e6) + 1, i):
        d += freq[j]

    if d > 1:
        print(i)
        break
    
    i -= 1