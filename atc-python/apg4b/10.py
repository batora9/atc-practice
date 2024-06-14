a = [3, 2, 6, 5, 4, 1]
# 逆順にする
a.reverse()
print(a)

# 昇順にソート
a.sort()
print(a)

# 降順にソート
a.sort(reverse=True)
print(a)

# aの要素を1つずつ取り出して表示
for i in a:
    print(i)

# [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]を作る
b = list(range(10))
print(b)
# bの要素数を表示
print(len(b))
# bの2から4番目の要素を取り出して表示
print(b[2:5])