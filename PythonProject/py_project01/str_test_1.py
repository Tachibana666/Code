s = input("输入邮箱：")
if s.count("@") == 1 and s.find(".", s.find("@")) and not s.startswith(".") and ".@" not in s:
    print("格式正确！")
else :
    print("格式错误！")