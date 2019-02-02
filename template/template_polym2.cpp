//多态。注意参数传递
#include <iostream>
using namespace std;

template<typename T, typename Y>
class Father
{
public:
    T age;
    Y name;
    Father(T t1, Y y1)
    {
        age = t1;
        name = y1;
    }
    virtual void show()
    {

    }
};

template<typename T>
class Father1
{
public:
    T age;
    Father1(T t1)
    {
        age = t1;
    }
    virtual void show1()
    {

    }
};

template<typename W, typename Z>
class Son : public Father<W, Z>
{
public:
    Son(W a, Z b) : Father<W, Z>(a, b)
    {

    }
    virtual void show()
    {
        cout << this->age << this->age << endl;
    }
};

template<typename W, typename Z>
class Son1 : public Father1<W>
{
public:
    Son1(W a) : Father1<W>(a)
    {

    }
    void show1()
    {
        cout << this->age << endl;
    }
};

//int main()
//{
//    Father<int, string>* f1 = new Son<int, string>(30,"Harden");
//    f1->show();
//    delete f1;
//    Father1<float>* f2 = new Son1<float, string>(32.0f);
//    f2->show1();
//    delete f2;
//    return 0;
//}
