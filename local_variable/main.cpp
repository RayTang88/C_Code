#include <iostream>
#include "local.h"
#include "head.h"

using namespace std;
int & ref_variable()
{
    int a = 12;
    return a;
}
int abc(int a, int b = 15, char c = 'n')
{
    cout << a <<" "<< b <<" "<< c <<endl;
}
int fun2(int a =14, int b = 17);
void fun(int a , int b)
{
    cout << "3:" << a << b <<endl;
}
void fun(int a , float b)
{
    cout << "4:" << a << b <<endl;
}
void fun(char a , double b)
{
    cout << "5:" << a << b <<endl;
}


void fun(char a ,char b)
{
    cout <<"1:"<< a <<" "<< b << endl;
}

void fun(char c, char d, char f = 'f')
{
    cout <<"2:"<< c <<" "<< d <<" "<< f << endl;
}

int main()
{
    fun3(1,2);
    //带默认参数的函数重载
    /*
    fun('a','b');
    /*
    //函数重载
    fun('e', 2.1);
    fun('r',2.111223423345);
    //函数原型中传入默认的值
    /*
    fun2();
    //函数传参数
    /*
    int a = 12;
    int b = 16;
    abc(a, b, 'z');
    //变量作用域
    /*
    for(int i = 0; i < 5; i++){
        cout  << "hello";
    }
     for(int i = 0; i < 5; i++){
        cout  << "hello";
    }

    //地址引用
    /*
    int & b = ref_variable();
    cout << b << endl;
    */
    return 0;
}
int fun2(int a, int b)
{
    cout << a <<" "<< b <<endl;
}
