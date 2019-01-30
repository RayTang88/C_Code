/**
 *Filename:
 *Description: 基本的继承和指针继承
 *Author:
 *Time:
 *Copyright:
 */
#include <iostream>
using namespace std;

class People
{
public:
    void bQuality()
    {
        cout <<"baseQuality"<<endl;
    }
};
class Child : public People
{
public:
    void Study()
    {
        cout <<"Study"<<endl;
    }
};
class Adult : public People
{
public:
    void Work()
    {
        cout <<"Work"<<endl;
    }
};
class Oldpeople : public People
{
public:
    void Strenth()
    {
        cout <<"Strenth"<<endl;
    }
};
int main()
{
    Child child;
    child.bQuality();//普通继承调用父类的方法
    Child* chi = new Child;//继承方法指针调用
    chi->Study();
    delete chi;

    return 0;
}
