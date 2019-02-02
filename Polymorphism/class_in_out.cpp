//内外层函数
#include <iostream>
using namespace std;
class Father
{
public:
    int age;
    Father(): s1(this)
    {
        age = 60;
    }
public:
    class Son
    {
    public:
        string name;
        Father* f1;
        Son(Father* pf) : f1(pf)
        {
            name = 'a';
        }
        void sfun1()
        {
            cout << f1->age << endl;
        }
    };
public:
    Son s1;
    //void ffun1()
    //{
    //    Son s2;
    //    s2.sfun1();
    //}



};
//int main()
//{
//    Father f2;
//    f2.age = 15;
//    f2.s1.sfun1();
//    //f2.ffun1();
//    return 0;
//}
