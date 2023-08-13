def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_max_gcd(arr):
    n = len(arr)
    max_gcd = 0

    for i in range(n):
        for j in range(i + 1, n):
            max_gcd = max(max_gcd, gcd(arr[i], arr[j]))

    return max_gcd

# Example usage
n = int(input())

arr = list(map(int, input().split()))
result = find_max_gcd(arr)
print(result)
