#include "main.h"
#include "Display/Display.h"
#include "AddItem/AddItem.h"

/* 成员函数实现 */
// 构造函数
Date::Date(int year, int month, int day)
    : year(year), month(month), day(day) {}
Item::Item(Date date, Reason reason, int amount)
    : date(date), reason(reason), amount(amount) {};

/* 全局变量定义 */
vector<Item> itemList; // 大列表
int command = 0;       // 用户输入的命令

int main()
{

    //?测试数据
    itemList = {
        Item(Date(2024, 3, 21), study, 20),
        Item(Date(2022, 8, 12), life, -30),
    };

    while (true)
    {
        /* 显示 */
        display();

        /* 输入 */
        cin >> command;
        /* 执行对应操作 */
    }

    return 0;
}