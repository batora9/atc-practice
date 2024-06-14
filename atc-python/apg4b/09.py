# cppにおけるfor(int i = 0; i < 5; i++)のようなもの
for i in range(5):
    print(i)

# 改行
print()

# cppにおけるfor(int i = 5; i < 10; i++)のようなもの
for i in range(5,10):
    print(i)

# 改行
print()

# cppにおけるfor(int i = 0; i < 10; i+=2)のようなもの
for i in range(0,10,2):
    print(i)

# 改行
print()

# breakしないときはelseが実行される
for i in range(5):
    print(i)
else:
    print("loop end")
print("end")

# 改行
print()

# breakしたときはelseが実行されない
for i in range(5):
    if i == 3:
        break
    print(i)
else:
    print("loop end")
print("end")