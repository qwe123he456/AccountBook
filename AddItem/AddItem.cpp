#include "main.h"

void AddItem(Item item)
{
    cout << "Add item: " << item.date.year << "-" << item.date.month << "-" << item.date.day
         << ", reason: " << item.reason
         << ", amount: " << item.amount << endl;
}