t = int(input())
for _ in range(t):
    n = int(input())
    length = 1
    while n > 9 * 10**(length - 1) * (length):
        n -= 9*10**(length - 1) * (length)
        length += 1

    (q, r) = divmod(n - 1, length)
    print(str(10**(length - 1) + q)[r])