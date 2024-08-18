# a code that implements the same function as hello_jack.c
name = input("What's your name?")
print("hello,", name) # 默认在字符串间加上空格
print("hello,",name, sep="?")
print(f"hello, {name}") #和上面输出形式等效
print("hello, "+ name) #和上面输出形式等效