#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    int high;
    Person(int a, float b)
    {
        age = a;
        high = b;
    }
};
//int main()
//{
//    Person op(12,2.8f);
//    Person *ptr = new Person(21, 33.11f);
//    cout << "带参数传递指针：" << ptr->age << ptr->high << endl;
//    cout << "带参数传递普通：" << op.age << op.high << endl;
//    delete ptr;
//    return 0;
//}
