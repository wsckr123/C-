#include "Library.h"
#include <iostream>

// 添加图书至馆藏vector
void Library::addBook(Book b)
{
    bookList.push_back(b);
}

// 根据ISBN检索图书，返回对应图书指针
Book* Library::findBook(string isbn)
{
    for (int i = 0; i < bookList.size(); i++)
    {
        if (bookList[i].getIsbn() == isbn)
        {
            return &bookList[i];
        }
    }
    return nullptr; // 没有匹配图书返回空指针
}

// 展示所有馆藏图书信息
void Library::showAllBook() const
{
    cout << "\n====== Library All Books ======" << endl;
    for (auto& book : bookList)
    {
        book.showInfo();
    }
}
