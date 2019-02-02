/**
 *Filename:
 *Description:
 *Author:
 *Time:
 *Copyright:
 */
 #include <iostream>
 #include <cstdio>
 #include <cstring>
 using namespace std;

 //函数的引用
 void fun1(int a)
 {
    cout << &a << endl;
    a = 13;
 }
 void fun(int &a)
 {
    cout << &a <<endl;
    a = 13;
 }
 void fun2(int *p)
 {
    cout << *p <<endl;
    *p = 13;
 }
 void Exchange(int &a, int &b)
 {
    int temp;
    temp = a;
    a = b;
    b =temp;
 }
// int main()
// {
//    //利用引用交换两个值
//    int a = 12;
//    int b = 13;
//    cout << "a:" << a <<endl;
//    cout << "b:" << b <<endl;
//    Exchange(a, b);
//    cout << "a:" << a <<endl;
//    cout << "b:" << b <<endl;
//    /*
//    //指针的引用
//    int b= 12;
//    fun2(&b);
//    cout << b <<endl;
//
//    /*
//    //函数的引用
//    int b = 12;
//    cout << &b << endl;
//    fun(b);
//    cout << b << endl;
//    fun1(b);
//    cout << b << endl;
//    /*
//    //二维数组的引用
//    int arr[2][3];
//    int (&p)[2][3] = arr;
//    p[1][1] = 3;
//    cout << &p << " " << p  << " " << arr[1][1] <<endl;
//    /*
//    //一维数组的引用
//    int arr[12];
//    int (& p)[12] = arr;
//    p[1] = 5;
//    cout << arr[1] <<endl;
//    /*
//    //其他引用
//    const int &a = 12;
//    cout << &a << " " << a << " " << * &a <<endl;
//
//    /*
//    //引用
//    int a =10;
//    int &b = a;
//    int &d = b;
//    cout << &a << " " << &b << " " << &d <<endl;
//     /*
//    int * p = new int(12);
//    //*p = 12;
//    //cout <<*p<<endl;
//    //delete p;
//    int *p = new int[5];
//    //memset(p,0,sizeof(p));//数组初始化
//    cout << "输出中文vsdf问你加们" <<endl;
//    delete[] p;
//    */
//    return 0;
// }

