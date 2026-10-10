#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

/**
 * @brief 图书类，封装图书基础信息与借阅状态
 */
class Book
{
private:
    string name;    // 图书名称
    string isbn;    // ISBN编号
    string press;   // 出版社
    double price;   // 图书价格
    int pages;      // 总页数
    bool available; // true：可借阅；false：已借出
public:
    //无参构造
    Book();
    //带参构造，初始化图书信息
    Book(string n, string i, string p, double pr, int pa);

    // 设置图书借阅状态
    void setAvailable(bool b);
    // 获取图书借阅状态
    bool getAvailable() const;
    // 获取图书名称
    string getName() const;
    // 获取ISBN
    string getIsbn() const;
    //【特色功能】获取图书状态文字描述
    string getStateDesc() const;
    // 展示图书全部信息
    void showInfo() const;
};
#endif
