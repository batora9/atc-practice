n = int(input())
a = list(map(int, input().split()))
avg = sum(a) // n

for i in range(n):
    print(abs(a[i] - avg))