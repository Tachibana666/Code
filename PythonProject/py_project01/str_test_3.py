n = int(input("输入字符串的个数："))
l = []
for i in range(1,n+1):
    s = input(f"输入第{i}个字符串")
    l.append(s[::-1].upper())
print(l)