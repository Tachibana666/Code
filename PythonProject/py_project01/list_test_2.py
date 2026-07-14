num_list1 = [19, 23, 54, 64, 875, 20, 109, 232, 123, 54]
num_list2 = [55, 80, 72, 35, 60, 123, 54, 29, 91]

# for num in num_list2:
#     if num not in num_list1:
#         num_list1.append(num)
# print(num_list1)

#解包：将列表这一类容器解开成一个一个独立的元素
#组包：将多个值合并到一个容器
# num_list = [*num_list1, *num_list2]
#
# new_list = []
# for num in num_list:
#     if num not in new_list:
#         new_list.append(num)
# print(new_list)


num_list = num_list1 + num_list2

new_list = []
for num in num_list:
    if num not in new_list:
        new_list.append(num)
print(new_list)