#include <iostream>
using namespace std;

class People
{
public:
    int a = 12;
    void fun()
    {
        cout << a <<endl;
    }

protected:
    void fun4()
    {
        cout <<"protected 输出："<< a <<endl;
    }
};


class testproetcted : public People
{
public:

    void testfun()
    {

        fun4();
    }
};


int fun()
{
    People op;
    op.a = 2;
    op.fun();
}
class Bird
{
public:
    void fun2()
    {
        People op;
        op.fun();

    }
};

class Student
{
private:
    int age = 12 ;

    void fun1()
    {
        cout <<"friend输出的年龄是：" <<age <<endl;
    }
    friend void testfriend();
    //friend int main();
protected:
    int age2 = 15;
    void fun2()
    {
        cout <<"friend输出的年龄是：" <<age2 <<endl;
    }
    friend void testfriend();
public:
    int get()
    {
        cout <<"在public中写入并重新设置获得age：" <<age<<endl;
        return age;
    }
    int set()
    {
        age = 123;
        return age;
    }


};

void testfriend()
{
    Student op1;
    op1.fun2();
}
//int main()
//{
//
//    //在public中写入并重新设置获得age
//    int age2;
//    Student op;
//    op.set();
//    age2 = op.get();
//    cout << age2 <<endl;
    //友元属性的使用
    /*
    testfriend();//对特定函数使用友元调用私有属性
    Student op;//初始化类对象
    op.fun1();//调用类中的私有属性

    //使用protected属性定义函数
    /*
    testproetcted op;
    op.testfun();
    //类外使用类中公共元素和函数
    /*
    Bird fly;
    fly.fun2();
    //用普通变量和指针访问类中的元素
    /*
    People op;
    People * op1 = new People;
    op.a = 1;
    op.fun();
    op1->a = 10;
    op1->fun();

    delete op1;
    */
//    return 0;
//}
