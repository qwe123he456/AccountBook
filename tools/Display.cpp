// 将枚举类型转换成字符串
string ReasonToString(Category category)
{
    switch (category)
    {
    case study:
        return "study";
    case life:
        return "life";
    case job:
        return "job";
    default:
        return "unknown";
    }
}

// 命令行显示输出
void display()
{
    for (auto item : itemList)
    {
        printf("%d-%d-%d %s %+d\n",
               item.date.year,
               item.date.month,
               item.date.day,
               ReasonToString(item.category).c_str(),
               item.amount);
    }
}