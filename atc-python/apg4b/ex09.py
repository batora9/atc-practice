n = int(input())
a = int(input())
for i in range(1,n+1):
    op,b = input().split()
    b = int(b)
    if op == '+':
        a += b
    elif op == '-':
        a -= b
    elif op == '*':
        a *= b
    elif op == '/':
        if b == 0:
            print('error')
            break
        else:
            a //= b
    print(i,a)
    