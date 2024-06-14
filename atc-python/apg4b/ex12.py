n = int(input())
t = list(map(int, input().split()))
min_t = min(t)
for i, j in enumerate(t):
    if j == min_t:
        print(i + 1)
        break