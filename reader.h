#ifndef READER_H
#define READER_H
#include <vector>
#include "Book.h"
using namespace std;

/**
 * @brief Reader读者类，实现借书、还书功能
 * 依赖Book类，使用STL vector容器存放借阅图书指针
 */
class Reader
{
private:
    string readerName;           // 读者姓名
    vector<Book*> borrowList;    // STL vector容器，保存读者借阅图书的指针
public:
    /**
     * @brief 构造函数，初始化读者名称
     * @param name 读者名字
     */
    Reader(string name);

    /**
     * @brief 借书操作
     * @param b 图书对象指针
     * @return 借书成功返回true，失败返回false
     */
    bool borrowBook(Book* b);

    /**
     * @brief 还书操作
     * @param b 图书对象指针
     * @return 还书成功返回true，失败返回false
     */
    bool returnBook(Book* b);

    /**
     * @brief 展示当前读者借阅的所有图书，遍历STL vector
     */
    void showBorrow() const;
};
#endif
