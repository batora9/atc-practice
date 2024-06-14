# 何もない行は左詰め
print("hoge")

def function():
    # 関数定義のコロンの後、インデントする
    # 複数行記述する場合、ずっとインデントしたまま
    print("foo")
    return 0

for i in range(10):
    # for 文のコロンの後、インデントする
    print("bar")
    for j in range(10):
        # 二重 (以上) にインデントすることもある
        print("baz")

# 関数の呼び出しは、関数名の後に括弧をつける
print(function())

print("hello"); print("world")