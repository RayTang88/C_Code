#include <iostream>
using namespace std;
class Person
{
public:
    int age;
    Person()
    {
        age = 3;
    }
};
void fun2(Person& a)
{
    while(a.age < 20)
    {
        if(a.age == 10)
        {
            throw &a;
        }
        cout << "a" << a.age << endl;
        a.age++;

    }
}
void fun1(int a)
{
    while(a < 10)
    {
        if(a == 5)
        {
            throw 12121.213;
        }
        cout << "a" << a << endl;
        a++;

    }
}
//int main()
//{
//    Person p1;
//    try
//    {
//        fun2(p1);
//    }
//    catch(Person& a)
//    {
//
//       cout << a.age;
//    }
//    catch(Person* b)
//    {
//       cout << b->age;
//
//    }
//    catch(int a)
//    {
//        try
//        {
//            fun1(a + 1);
//        }
//        catch(int d)
//        {
//
//        }
//        cout << a << endl;
//    }
//    catch(char c)
//    {
//        cout << c << endl;
//    }
//    catch(...)
//    {
//        cout << "default" << endl;
//    }
//    return 0;
//}
