//继承函数之间的值传递以及析构函数之间的调用
#include <iostream>
using namespace std;

class GrandFather
{
private:
    int gf_age_1;
protected:
    int gf_age_2;
public:
    int gf_age;
    GrandFather(int a) : gf_age(a)
    {
        gf_age = a + 38;
        cout << "GrandFather" << gf_age <<endl;
    }
    ~GrandFather()
    {
        cout << "GrandFather" << gf_age << endl;
    }
};
class Father : public GrandFather
{
private:
    int f_age_1;
protected:
    int f_age,weight;
public:
    Father(int a, int b) : GrandFather(a)
    {
        f_age = a + 20;
        weight = b;
        cout << "Father" << f_age << weight << endl;
    }
    ~Father()
    {
        cout << "Father" << f_age << endl;
    }

};
class Son : public Father
{
private:
    int age_1;
protected:
    int age;
public:
    Son(int a, int b) : Father(a, b)
    {
        age = a;
        cout << "son" << age << endl;
    }
    ~Son()
    {
        cout << "son" << age << endl;
    }

};
//int main()
//{
//    Son s1(12, 25);
//    return 0;
//}
