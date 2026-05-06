#include "main.h"

/* 类的定义 */
// 日期类
class Date
{
public:
    int year;
    int month;
    int day;
    Date(int year, int month, int day);
};
// 账单项目
class Item
{
public:
    Date date;
    Reason reason;
    int amount;
    Item(Date date, Reason reason, int amount);
};

/* 成员函数的实现 */
// 构造函数
Date::Date(int year, int month, int day)
    : year(year), month(month), day(day) {}
Item::Item(Date date, Reason reason, int amount)
    : date(date), reason(reason), amount(amount) {};

int main()
{

    return 0;
}