t = int(input())
for _ in range(t):
    y, x = map(int, input().split())
    z = max(y, x)
    z2 = (z - 1)**2
    ans = 0
    if z%2:
        if y == z:
            ans = z2 + x
        else:
            ans = z2 + 2*z - y

    else:
        if x == z:
            ans = z2 + y

        else:
            ans = z2 + 2*z - x
    print(ans)

