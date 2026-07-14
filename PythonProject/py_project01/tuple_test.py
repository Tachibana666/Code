students = (
    ("S001", "ema", 85, 92, 78),
    ("S002", "hiro", 92, 88, 95),
    ("S003", "sheri", 78, 85, 82),
    ("S004", "hanna", 88, 79, 91),
    ("S005", "nanoka", 95, 96, 89),
    ("S006", "mago", 76, 82, 77),
    ("S007", "noa", 89, 91, 94),
    ("S008", "anan", 75, 69, 82),
    ("S009", "meruru", 86, 89, 98),
    ("S010", "koko", 66, 59, 72),
)
good_student = []
print("学号\t\t姓名\t\t语文\t\t数学\t\t英语\t\t总分\t\t平均分")
for id, name, cn, ma, eng in students:
    tal = cn+ma+eng
    print(f"{id}\t{name} \t{cn}\t\t{ma}\t\t{eng}\t\t{tal}\t\t{tal/3:.1f}")
    if tal/3 > 90:
        good_student.append(name)
Chinese =[s[2] for s in students]
Math = [s[3] for s in students]
English = [s[4] for s in students]
print(f"语文：\n\t最低分：{min(Chinese)}\n\t最高分：{max(Chinese)}\n\t平均分：{sum(Chinese)/10}")
print(f"数学：\n\t最低分：{min(Math)}\n\t最高分：{max(Math)}\n\t平均分：{sum(Math)/10}")
print(f"英语：\n\t最低分：{min(English)}\n\t最高分：{max(English)}\n\t平均分：{sum(English)/10}")
isprime = 0
for name in good_student:
    print(f"{name}同学", end = "，")
    isprime = 1
if isprime :
    print("都是好孩子！")
else :
    print("正しくない！")