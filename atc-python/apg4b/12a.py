l = [1,3,-5,2]
res = all([v > 0 for v in l]) # すべての要素が正の数かどうか
res2 = any([v > 0 for v in l]) # いずれかの要素が正の数かどうか
print(res)
print(res2)

# 空のリストに対してallはTrue、anyはFalseを返す
print(all([]), any([]))