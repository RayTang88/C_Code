#include <iostream>
#include "Gzdemo.h"
#include "Twodimension.h"
#include "Functionptr.h"

using namespace std;
//定义函数指针
int main(){
    //double (*ptrcalc)(double,double); //采用定义类型的方法定义函数指针
    auto ptrcalc = addition;//采用自动判断函数类型的方法定义函数指针,该方法需要给指针初始化(切记)
    double num1,num2;
    cout <<"Please input num1,num2:";
    cin >>num1>>num2;
    cout <<"Please input op(+-*/):";
    char op;
    cin >>op;
    switch(op){
        case '+':
            ptrcalc = addition;
            break;
        case '-':
            ptrcalc = subscation;
            break;
        case '*':
            ptrcalc = multiplication;
            break;
        case '/':
            if(num2 == 0){
                cout <<"this is a wrong input"<<endl;
                break;
            }else{
                ptrcalc = divication;
                break;
            }
    }
    print_result(ptrcalc, num1, num2);
}

/*
//使用函数实现二维数组打印
int main()
{
    double powers[3][5]={
        {1,2,2,22,2},
        {2,4,2,25,7},
        {3,5,6,27,0}
    };
    show(powers,3);
}


//使用函数实现一维数组输入和打印
int main()
{
    int value[5];
    int len = sizeof(value)/sizeof(int);
    input(value,len);
    print(value,len);
}

/*
//传值和引用
void change (int& num)
{
    num++;
}
int main()
{
    int num = 10;
    change(num);
    cout << num << endl;
}
/*
//用函数计算圆柱体和矩形的面积
void calcRec();
void calcCylinder();
int main()
{
    //1.提示输入要计算的内容
    cout <<"if you want calc the rec,please input 1"<<endl;
    cout <<"if you want calc the cylinder,please input 2"<<endl;
    cout <<"if you want exit,please input 0"<<endl;
    //2.计算相应内容
    int choice;
    cin >>choice;
    switch(choice){
        case 1:
            calcRec();
            break;
        case 2:
            calcCylinder();
            break;
        default:
            break;
    }
    cout <<"Ths u to use  this software,byebye!"<<endl;
}
void calcRec()
{
    double length;
    double weith;
    double height;
    cout <<"Please input the length and weith and height:";
    cin >>length>>weith>>height;
    double result = length * weith *height;
    cout <<"The Rec volum is::"<<result<<endl;
}
void calcCylinder()
{
    double raids;
    double height;
    cout <<"Please input the raids and height:";
    cin >>raids>>height;
    double result = 3.14 * raids *height;
    cout <<"The Cylinder volum is:"<<result<<endl;
}
/*
//定义自定义函数
int sum(int, int);//函数的原型
int main()
{
    //函数调用
    int result = sum(5,3);
    cout <<result<<endl;
    return 0;


}

//函数定义
int sum(int num1, int num2)
{
    //函数体的实现
    int result = num1 + num2;
    return result;
}

*/


