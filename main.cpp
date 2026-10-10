#include <iostream>
#include "Library.h"
#include "Reader.h"
int main()
{
    Library lib;
    //创建三本图书，加入图书馆
    Book b1("C++ Program Design", "97871155", "People's Post and Telecommunication Press", 49.5, 320);
    Book b2("Data Structure (C++ Version)", "97870405", "Higher Education Press", 38, 280);
    Book b3("Computer Operating System", "97873026", "Tsinghua University Press", 45, 350);
    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);

    lib.showAllBook();

    Reader zhangsan("ZhangSan");
    Reader lisi("LiSi");

    //借书测试
    zhangsan.borrowBook(lib.findBook("97871155"));
    lisi.borrowBook(lib.findBook("97870405"));

    zhangsan.showBorrow();
    lisi.showBorrow();

    //还书测试
    zhangsan.returnBook(lib.findBook("97871155"));
    zhangsan.showBorrow();

    lisi.borrowBook(lib.findBook("97871155"));
    lisi.showBorrow();

    system("pause");
    return 0;
}
