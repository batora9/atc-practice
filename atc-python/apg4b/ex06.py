a, op, b = input().split()
a = int(a)
b = int(b)
if op == '+':
    print(a + b)
elif op == '-':
    print(a - b)
elif op == '*':
    print(a * b)
elif op == '/':
    if b == 0:
        print('error')
    else:
        print(a // b)
else:
    print('error')