mxA, M = 10**6, 10**9 + 7
iv, f1, f2 = [0 for _ in range(mxA + 1)], [0 for _ in range(mxA + 1)], [0 for _ in range(mxA + 1)]

iv[1] = 1
for i in range(2, mxA +1):
    iv[i] = M - (M // i * iv[M % i] % M)

f1[0], f2[0] = 1, 1
for i in range(1, mxA + 1):
    f1[i] = f1[i - 1] * i % M
    f2[i] = f2[i - 1] * iv[i] % M

n = int(input())
for i in range(n):
    a, b = map(int, input().split())
    print(f1[a] * f2[b] % M * f2[a - b] % M)