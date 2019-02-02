//纯虚函数
#include <iostream>
using namespace std;

class Father
{
public:
    //Father()
    //{

    //}
    virtual void show() = 0;

    //void fun()
    //{
    //    cout << "Good" <<endl;
    //}
};

class Son : public Father
{
public:
    void show()
    {
        cout << "son show" <<endl;
    }
};

//int main()
//{
//    Son s;
//    s.show();
//    //Father f;
//    //Father *f = new Son;
//    //f->show();
//    return 0;
//}
