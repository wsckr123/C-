#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "Book.h"
using namespace std;

/**
 * @brief Library图书馆类，负责管理馆藏图书
 * 与Book类为聚合关系：图书馆包含多本图书
 */
class Library
{
private:
    vector<Book> bookList;  // 容器，存储图书馆内所有馆藏图书
public:
    /**
     * @brief 添加图书到图书馆馆藏列表
     * @param b 待添加的图书对象
     */
    void addBook(Book b);

    /**
     * @brief 根据ISBN编号查找图书
     * @param isbn 图书ISBN字符串
     * @return 找到返回图书对象指针；未找到返回nullptr
     */
    Book* findBook(string isbn);

    /**
     * @brief 遍历并输出图书馆全部馆藏图书信息
     */
    void showAllBook() const;
};
#endif
