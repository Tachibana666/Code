shopping_cart = {}

while True:
    ctrl = int(input("""
        1.添加购物车
        2.修改购物车
        3.删除购物车
        4.查询购物车
        5.退出购物车
    """))

    match ctrl :
        case 1 :
            name = input("请输入商品名称：")
            if name in shopping_cart:
                print("该商品名称已经存在！")
                continue
            price = float(input("请输入商品价格："))
            num = int(input("请输入商品数量："))
            shopping_cart[name] = [price,num]
            print(f"已成功添加数据！\n{name}:{shopping_cart[name][0]}元，{shopping_cart[name][1]}个")
        case 2:
            name = input("请输入要修改的商品名称：")
            if name not in shopping_cart:
                print("该商品不存在！")
                continue
            price = float(input("请输入修改后的商品价格："))
            num = int(input("请输入修改后的商品数量："))
            shopping_cart[name] = [price, num]
            print(f"已成功修改数据！\n修改后为：{name}:{shopping_cart[name][0]}元，{shopping_cart[name][1]}个")
        case 3:
            name = input("请输入要删除的商品名称：")
            if name not in shopping_cart:
                print("该商品不存在！")
                continue
            print(f"已成功删除{name}:{shopping_cart[name][0]}元，{shopping_cart[name][1]}个")
            del shopping_cart[name]
        case 4:
            if shopping_cart == {}:
                print("购物车为空！")
                continue
            for item in shopping_cart.items():
                name,l = item
                price = l[0]
                num = l[1]
                print(f"商品名称：{name}，商品价格：{price}，商品数量：{num}")
        case 5:
            print("已退出系统。")
            shopping_cart.clear()
            break
        case _:
            print("输入错误！")
