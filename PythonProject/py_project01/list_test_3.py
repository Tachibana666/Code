list1 = []
for i in range(1,21):
    list1.append(i**2)
print(list1)

#列表推导式：按照一定规则快速生成列表
list2 = [i**2 for i in range(1,21)]
print(list2)

num_list = [19, 23, 54, 64, 87, 20, 109, 232, 123, 43, 26, 55, 72]
# new_list = []
# for num in num_list:
#     if num % 2 == 0:
#         new_list.append(num**2)
# print(new_list)
new_list = [i**2 for i in num_list if i%2 == 0]
print(new_list)