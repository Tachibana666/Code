l = []
n = int(input("输入想要存储的数据个数："))
print(f"请输入{n}个数字")
for i in range(n):
    print(f"输入第{i+1}个数字:",end=" ")
    l.append(int(input()))
l.sort()
print("数据排序后为：")
print(l)
print("最小值为", min(l), "， ", "最大值为", max(l))
print("平均值为", sum(l)/len(l))