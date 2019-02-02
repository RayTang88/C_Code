//函数重载——覆盖
#include <iostream>
using namespace std;

class Father
{
public:
    int age;
    Father()
    {
        age = 50;
    }
    void show(int a)
    {
        cout << a << endl;
    }
};
class Son : public Father
{
public:
    int age;
    Son()
    {
        age = 20;
    }
    void show()
    {
        cout << age << endl;
    }
};
//int main()
//{
//    Son s;
//    int a = 12;
//    s.Father::show(a);
//    return 0;
//}
