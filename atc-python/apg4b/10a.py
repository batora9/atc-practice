# 入力からリストを作る
a = list(map(int, input().split()))
print(a)

# 要素を空白区切りで出力する
print(*a)

# 要素を改行区切りで出力する
for x in a:
    print(x)

# for文を使わずに改行区切りで出力する
print(*a, sep="\n")