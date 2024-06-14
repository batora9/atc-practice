# pow
a = 3
b = 4
mod = 10
print(pow(a, b, mod)) # 81を10で割った余り 1

'''
pow(a,b) % modとpow(a,b)は同じ結果になるが、
pow(a,b)の値が非常に大きい場合、pow(a,b) % modの方が計算が高速
'''