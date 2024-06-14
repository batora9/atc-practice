# リストのスライス
a = [1, 2, 3, 4, 5]
print(a[1:4]) # 1番目から4番目より前まで
print(a[2:]) # 2番目以降
print(a[:3]) # 3番目より前
print(a[:]) # 全て
print(a[:-1]) # 最後の1つ手前まで

# リストの比較
a = [1, 2, 3]
b = [1, 2, 3]
c = [1, 2, 4]
print(a == b) # True
print(a == c) # False
print(a != c) # True
print(a < c) # True