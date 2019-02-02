#include <iostream>
using namespace std;

class Person
{
public:
    int age1;
    float avg_age2;

    Person( ):avg_age2(age1),age1(12)
    {

    }
    Person(int a):avg_age2(age1),age1(a)
    {

    }

};
//int main()
//{
//    Person *ptr_per1 = new Person;
//    cout <<"初始化列表初始化指针方式:"<< ptr_per1->avg_age2 <<endl;
//    Person *ptr_per2 = new Person(15);
//    cout <<"参数传递初始化指针方式:"<< ptr_per2->avg_age2 <<endl;
//    delete ptr_per1;
//    delete ptr_per2;
//    return 0;
//}
