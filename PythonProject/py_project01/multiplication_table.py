a = 1
b = 1
for j in range(9):
    for i in range(b):
        print(f"{a} x {b} = {a * b}", end="\t")
        a += 1
    a=1
    b+=1
    print()