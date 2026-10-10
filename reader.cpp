#include "Reader.h"
#include <iostream>

// 构造函数，初始化读者姓名
Reader::Reader(string name)
{
    readerName = name;
}

// 借书逻辑，将图书指针存入STL vector容器borrowList
bool Reader::borrowBook(Book* b)
{
    if (b == nullptr)
    {
        cout << readerName << " borrow failed: book not found" << endl;
        return false;
    }
    if (!b->getAvailable())
    {
        cout << readerName << " borrow failed: book is borrowed" << endl;
        return false;
    }
    borrowList.push_back(b);    // vector容器添加元素
    b->setAvailable(false);
    cout << readerName << " borrow success: \"" << b->getName() << "\"" << endl;
    return true;
}

// 还书逻辑：遍历vector，找到图书并删除容器内该指针
bool Reader::returnBook(Book* b)
{
    if (b == nullptr)
    {
        cout << readerName << " return failed" << endl;
        return false;
    }
    // 迭代器遍历STL vector
    for (auto it = borrowList.begin(); it != borrowList.end(); it++)
    {
        if (*it == b)
        {
            borrowList.erase(it);  // vector删除指定元素
            b->setAvailable(true);
            cout << readerName << " return success: \"" << b->getName() << "\"" << endl;
            return true;
        }
    }
    cout << readerName << " return failed: you do not borrow this book!" << endl;
    return false;
}

// 遍历STL vector输出借阅图书列表
void Reader::showBorrow() const
{
    cout << readerName << " current borrowed books:" << endl;
    if (borrowList.empty())  // vector判断容器是否为空
    {
        cout << "(No borrowed books)" << endl;
        return;
    }
    for (auto bookPtr : borrowList)
    {
        cout << "\"" << bookPtr->getName() << "\"  ISBN: " << bookPtr->getIsbn() << endl;
    }
}
