/**
 *Filename:
 *Description:
 *Author:
 *Time:
 *Copyright:
 */
#include <iostream>
using namespace std;

class Person
{
public:
    int age = 12;
    int operator+(int a)
    {
        return (this->age + a);
    }
};
//int main()
//{
//    Person p1;
//    cout << p1 + 12;
//    return 0;
//}
