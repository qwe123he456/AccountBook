#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

/* 枚举声明 */
// 账目类型枚举
enum Reason
{
    study,
    life,
    job
};

/* 类的声明 */
// 日期类
class Date
{
public:
    int year;
    int month;
    int day;
    Date(int year = 1, int month = 1, int day = 1);
};
// 账单的单项
class Item
{
public:
    Date date;
    Reason reason;
    int amount;
    Item(Date date, Reason reason = study, int amount = 0);
};

/* 全局变量声明 */
extern vector<Item> itemList; // 大列表