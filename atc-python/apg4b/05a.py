# 空白区切りの入力を受け取るとひとまとまりの文字列として受け取る
s = input()
print(s)

# 空白区切りで分解して受け取る
# splitに何も指定しないと空白文字で分割される
a,b,c = input().split()

print(a)
print(b)
print(c)

# 区切り文字を指定して分割する
a, b, c = input().split(":")

print(a)
print(b)
print(c)