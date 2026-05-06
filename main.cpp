#include "main.h"

/* 成员函数实现 */
// 构造函数
Date::Date(int year, int month, int day)
    : year(year), month(month), day(day) {}
Item::Item(Date date, Reason reason, int amount)
    : date(date), reason(reason), amount(amount) {};

/* 全局变量定义 */
vector<Item> itemList; // 大列表

int main()
{

    return 0;
}