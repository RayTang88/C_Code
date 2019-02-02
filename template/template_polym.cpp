//多态。注意参数传递
#include <iostream>
using namespace std;

template<typename T>
class Father
{
public:
    T age;
    Father(T t1)
    {
        age = t1;
    }
    virtual void show()
    {

    }
};

template<typename W, typename Z>
class Son : public Father<W>
{
public:
    Son(W a) : Father<W>(a)
    {

    }
    void show()
    {
        cout << this->age << endl;
    }
};

//int main()
//{
//
//    Father<float>* f2 = new Son<float, string>(32.0f);
//    f2->show();
//    delete f2;
//    return 0;
//}
