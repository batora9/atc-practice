print(7 + 2)
print(7 - 2)
print(7 * 2)
print(7 / 2)
print(7 % 2)
print(7 ** 2)
print(7 // 2) # 切り捨て除算

# 割り切れるときの実数除算
print(6 / 3)
print(6 // 3)

# 負の除数による除算

# 除数が正の場合
print(7 / 2) # 3.5
print(7 // 2) # 3

# 除数が負の場合
print(7 / -2) # -3.5
print(7 // -2) # -4

# 除数が負の場合は余りの範囲も負の方向になる

# divmod関数
q,r = divmod(7, 2)
print(q, r) # qは商、rは余り 3 1