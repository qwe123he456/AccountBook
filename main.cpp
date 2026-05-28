#include "main.h"
#include "tools/Display.cpp"
#include "tools/AddItem.cpp"
#include "tools/handleCommand.cpp"

/* 成员函数实现 */
// 构造函数
Date::Date(int year, int month, int day)
    : year(year), month(month), day(day) {}
Item::Item(Date date, Category category, string desc, int amount)
    : date(date), category(category), desc(desc), amount(amount) {};

/* 全局变量定义 */
vector<Item> itemList; // 大列表
int command = 0;       // 用户输入的命令

int main()
{

    //?测试数据
    itemList = {
        Item(Date(2024, 3, 21), study, "学习", 20),
        Item(Date(2022, 8, 12), life, "生活", -30),
    };

    // 主循环
    while (true)
    {
        /* 显示 */
        display();

        /* 输入 */
        cout << "输入他妈的1~7的指令：" << endl;
        cin >> command;

        /* 执行对应操作 */
        handleCommand(command);
    }

    return 0;
}