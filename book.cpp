#include "Book.h"
#include <iostream>
Book::Book()
{
    name = "";
    isbn = "";
    press = "";
    price = 0;
    pages = 0;
    available = true;
}
Book::Book(string n, string i, string p, double pr, int pa)
{
    name = n;
    isbn = i;
    press = p;
    price = pr;
    pages = pa;
    available = true;
}
void Book::setAvailable(bool b)
{
    available = b;
}
bool Book::getAvailable() const
{
    return available;
}
string Book::getName() const
{
    return name;
}
string Book::getIsbn() const
{
    return isbn;
}
//特色功能：返回状态文本
string Book::getStateDesc() const
{
    if (available)
        return "Available";
    else
        return "Borrowed";
}
void Book::showInfo() const
{
    cout << "----------Book Info----------" << endl;
    cout << "Name:" << name << endl;
    cout << "ISBN:" << isbn << endl;
    cout << "Press:" << press << endl;
    cout << "Price:" << price << endl;
    cout << "Pages:" << pages << endl;
    cout << "Status:" << getStateDesc() << endl;
    cout << "----------------------------" << endl;
}
