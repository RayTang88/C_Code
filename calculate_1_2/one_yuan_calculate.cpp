//一元运算符重载-
#include <iostream>
using namespace std;
class Person
{
public:
    float weight;
    Person(float a)
    {
        weight = a;
    }
    float operator -()
    {
        return (-weight);
    }
};

//float operator -(Person &p)
//{
//    return (-p.weight);
//}
//int main()
//{
//    Person p1(14.5f);
//    cout <<(-p1)<<endl;
//    return 0;
//}
