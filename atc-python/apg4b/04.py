# 型は変数に代入される値によって決まる
x = 3
print(x)
x = "AtCoder"
print(x)

# 複数の変数への代入
a, b = 10, 20
print(a)
print(b)

# swap
x, y = 5, 10
x, y = y, x
print(x)
print(y)

# Pythonのint型は多倍長整数であり大きさの制限がない
print(3 ** 1000)

# 10進数以外の整数リテラル
# 2進数
print(0b1010) # 10
# 8進数
print(0o777) # 511
# 16進数
print(0x123) # 291

# 異なる型同士での演算
# 片方がint型, もう片方がfloat型の場合、int型がfloat型に変換される
a = 7
b = 3.0
print(a / b) # 2.3333333333333335
