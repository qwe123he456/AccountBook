#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

/* 账目类型枚举 */
enum Reason
{
    study,
    life,
    job
};

/* 类的声明 */
class Date; // 日期类
class Item; // 账单项目

// 大列表
vector<Item> itemList(0);