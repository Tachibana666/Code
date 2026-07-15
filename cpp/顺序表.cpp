#include<iostream>
using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;
typedef int ElemType;
#define MAXSIZE 100

typedef struct {
    ElemType *elem;
    int length;
} SqList;

// 初始化
Status InitList_Sq(SqList &L) {
    L.elem = new ElemType[MAXSIZE];
    if(!L.elem) exit(OVERFLOW);
    L.length = 0;
    return OK;
}

// 销毁
Status DestroyList_Sq(SqList &L) {
    if(L.elem) {
        delete []L.elem;
        L.length = 0;
    }
    return OK;
}

// 查找（返回第一个值为e的位置，从1开始，未找到返回0）
int LocateElem_Sq(SqList L, ElemType e) {
    for(int i = 0; i < L.length; i++)
        if(L.elem[i] == e) return i+1;
    return 0;
}

// 插入（在第i个位置插入e，i从1开始）
Status ListInsert_Sq(SqList &L, int i, ElemType e) {
    if(i < 1 || i > L.length+1) return ERROR;
    if(L.length >= MAXSIZE) return ERROR;
    for(int j = L.length; j >= i; j--)
        L.elem[j] = L.elem[j-1];
    L.elem[i-1] = e;
    L.length++;
    return OK;
}

// 删除（删除第i个元素，用e返回其值）
Status ListDelete_Sq(SqList &L, int i, ElemType &e) {
    if(i < 1 || i > L.length) return ERROR;
    e = L.elem[i-1];
    for(int j = i; j < L.length; j++)
        L.elem[j-1] = L.elem[j];
    L.length--;
    return OK;
}

// 主函数
int main() {
    SqList L;
    int i, res, temp, a, b, c, e, choose;
    cout << "1. 建立顺序表\n";
    cout << "2. 输入数据\n";
    cout << "3. 查找\n";
    cout << "4. 插入\n";
    cout << "5. 删除\n";
    cout << "6. 输出数据\n";
    cout << "7. 销毁顺序表\n";
    cout << "0. 退出\n\n";

    choose = -1;
    while(choose != 0) {
        cout << "请选择:";
        cin >> choose;
        switch(choose) {
            case 1:
                if(InitList_Sq(L))
                    cout << "成功建立顺序表\n\n";
                else
                    cout << "顺序表建立失败\n\n";
                break;
            case 2:
                cout << "请输入10个数:\n";
                for(i = 0; i < 10; i++)
                    cin >> L.elem[i];
                L.length = 10;
                cout << endl;
                break;
            case 3: // 查找
                cout << "请输入要查找的元素值:";
                cin >> e;
                res = LocateElem_Sq(L, e);
                if(res)
                    cout << "元素" << e << "的位置是:" << res << endl << endl;
                else
                    cout << "未找到该元素\n\n";
                break;
            case 4: // 插入
                cout << "请输入插入位置和数值:";
                cin >> a >> b;
                if(ListInsert_Sq(L, a, b))
                    cout << "插入成功\n\n";
                else
                    cout << "插入失败\n\n";
                break;
            case 5: // 删除
                cout << "请输入删除位置:";
                cin >> c;
                if(ListDelete_Sq(L, c, e))
                    cout << "删除的元素值为:" << e << endl << endl;
                else
                    cout << "删除失败\n\n";
                break;
            case 6:
                cout << "当前顺序表为:\n";
                for(i = 0; i < L.length; i++)
                    cout << L.elem[i] << " ";
                cout << endl << endl;
                break;
            case 7:
                DestroyList_Sq(L);
                cout << "顺序表已销毁\n\n";
                break;
            case 0:
                break;
            default:
                cout << "选择无效，请重新输入\n\n";
        }
    }
    return 0;
}
