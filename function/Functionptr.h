#ifndef FUNCTIONPTR_H_INCLUDED
#define FUNCTIONPTR_H_INCLUDED
#include <iostream>
using namespace std;
//函数原型
/**加法*/
double addition(double, double);
/**减法*/
double subscation(double, double);
/**乘法*/
double multiplication(double, double);
/**除法*/
double divication(double, double);
/**打印结果*/
double print_result(double (*)(double, double), double, double);


//函数定义
double print_result(double (*ptrcalc)(double, double), double num1, double num2){
    double result= ptrcalc(num1, num2);
    cout <<"The result is:"<<result<<endl;
}
double addition(double num1, double num2){
    double result = num1 + num2;
    //cout <<result<<endl;
    return result;
}
double subscation(double num1, double num2){
    double result = num1 - num2;
    //cout <<result<<endl;
    return result;
}
double multiplication(double num1, double num2){
    double result = num1 * num2;
    //cout <<result<<endl;
    return result;
}
double divication(double num1, double num2){
    //if(num2==0){
        //cout <<"This is a wrong input"<<endl;
        //break;}

    double result = num1 / num2;
    //cout <<result<<endl;
    return result;
}




#endif // FUNCTIONPTR_H_INCLUDED
