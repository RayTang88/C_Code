/**
 *Filename:
 *Description:通过指针深拷贝,浅拷贝会造成指针重复释放
 *Author:
 *Time:
 *Copyright:
 */
 #include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    int * age;
    //char name;
    Person()
    {
        age = new int[2];
        age[0] = 12;
        age[1] = 15;
    }
    Person(const Person & a)
    {
        this->age = new int[2];
//        this->age[0] = a.age[0];
//        this->age[1] = a.age[1];
    memcpy(this->age, a.age, 8);
    }
    ~Person()
    {
        delete[] age;
    }
};
//int main()
//{
//    Person p1;
//    cout << p1.age[0] <<" "<< p1.age[1] << endl;
//    Person p2(p1);
//    cout << p2.age[0] <<" "<< p2.age[1] << endl;
//    return 0;
//}
