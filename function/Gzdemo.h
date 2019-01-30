#ifndef GZDEMO_H_INCLUDED
#define GZDEMO_H_INCLUDED
#include <iostream>
using namespace std;

//使用定义函数输入数组

//1.函数原型
void input(int[], int);
void print(int[], int);
//2.函数定义
void input(int values[], int len)
{
    if(len > 5){
        cout << "The len of array is beyond 5" <<endl;
        return;
    }
    string valuenames[]{"Power","Intelligence","Glamour","Morals","Blood"};
    for(int i = 0; i < len; i++){
        cout <<valuenames[i]<<":";
        cin >>values[i];
    }
}
void print(int value[], int len)
{
    string valuenames[]{"Power","Intelligence","Glamour","Morals","Blood"};
    for(int i = 0; i < len; i++){
        cout <<valuenames[i]<<":";
        cout <<value[i]<<endl;
    }
}

#endif // GZDEMO_H_INCLUDED
