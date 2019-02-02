/**
 *Filename:
 *Description:类型转换重载(特殊格式)
 *Author:
 *Time:
 *Copyright:
 */
#include <iostream>
using namespace std;
class Person
{
private:
    int age;
    float weight;
public:
    Person()
    {
        age = 12;
        weight = 12.12f;
    }
    operator int()
    {
        return age;
    }
    operator float()
    {
        return weight;
    }
};
//int main()
//{
//    Person p1;
//    cout << (int)p1;
//    cout << (float)p1;
//    return 0;
//}
