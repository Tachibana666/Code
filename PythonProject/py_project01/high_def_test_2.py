def cal_goods(freight, coupon = 0, points = 0, **info) :
    """
    根据传入的商品信息、优惠券金额、积分、运费计算最终总金额
    :param freight: 运费
    :param coupon: 优惠券金额
    :param points: 积分（仅能整百扣减）
    :param info: 传入的商品信息
        name: 商品名称
        price: 商品单价
        num: 商品数量
    :return:
    """
    name = info.get("name")
    price = info.get("price")
    num = info.get("num")
    if price * num <= 5000 and coupon > 0:
        print("商品金额未满5000，将计算不含优惠券的总金额")
        coupon = 0
    elif coupon > price * num:
        print("优惠券金额不可大于商品原总价，将计算不含优惠券的总金额")
        coupon = 0
    if points // 100 >= price * num - coupon:
        points = price * num - coupon
    print(f"已扣除{points // 100 * 100}积分作为抵扣")
    return price * num - coupon - points//100 -freight

coupon = 0
points = 0
name = input("输入商品名称：")
price = float(input("输入商品单价："))
num = int(input("输入商品数量："))
coupon = int(input("输入优惠券金额："))
points = int(input("输入积分："))
freight = float(input("输入运费："))
print(f"最终总金额为{cal_goods(freight, coupon, points, name = name, price = price, num = num)}")

