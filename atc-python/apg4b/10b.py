a = []

a.append(0)
a.append(1)
a.append(2)
a.append(3)
print(a)

a.pop() # 末尾の要素を取り出して削除
print(a)

a.pop(0) # 0番目の要素を取り出して削除
print(a)

a.insert(1, 1.5) # 1番目に1.5を挿入
print(a)