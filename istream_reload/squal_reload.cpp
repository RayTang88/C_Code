//赋值运算符重载
#include <iostream>
using namespace std;

class Person
{
private:
    char name;
public:
    Person()
    {
        name = 'w';
    }

    void show()
    {
        cout << name <<endl;
    }
    void operator = (char b)
    {
        name = b;
    }

};

//int main()
//{
//    Person p1;
//    p1 = 't';
//    p1.show();
//    return 0;
//}
