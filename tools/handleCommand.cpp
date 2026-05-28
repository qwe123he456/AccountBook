// 处理用户指令
void handleCommand(int command)
{
    string wordList[] =
        {
            "新增帐务记录数据。",
            "删除帐务记录（请参考上面修改的处理）。",
            "修改帐务记录（先查找，再修改。若查找出多个条目，则进一步提示用户选择记录的序号，再修改）。",
            "查找帐务数据（可按日期（年、月、日）、明细、类型、金额等查找）。",
            "对帐务数据排序（可按日期、名称、金额等排序。要求排序后，记录的序号也要重新编排）。",
            "帐务统计（根据日期范围，可分别按年、月、账目类型统计收、支、结余总金额，并显示）",
            "保存帐务数据到文件中、从文件中读入帐务数据。"};
    switch (command)
    {
    case 1: // 新增帐务记录数据。
        cout << wordList[command - 1] << endl;
        break;
    case 2: // 删除帐务记录
        cout << wordList[command - 1] << endl;
        break;
    case 3: // 修改帐务记录
        cout << wordList[command - 1] << endl;
        break;
    case 4: // 查找帐务数据
        cout << wordList[command - 1] << endl;
        break;
    case 5: // 对帐务数据排序
        cout << wordList[command - 1] << endl;
        break;
    case 6: // 帐务统计
        cout << wordList[command - 1] << endl;
        break;
    case 7: // 保存帐务数据到文件中、从文件中读入帐务数据。
        cout << wordList[command - 1] << endl;
        break;
    default:
        cout << "你输了个啥？" << endl;
        break;
    }

    // 画分割线
    cout << "--------------------------" << endl;
}