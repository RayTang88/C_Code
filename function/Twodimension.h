#ifndef TWODIMENSION_H_INCLUDED
#define TWODIMENSION_H_INCLUDED
using namespace std;
//2维数组的传参

//1.函数原型
void show(double (*)[5], int);
//2.函数的定义
void show(double (*arrs)[5], int len)
{
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 5; j++){
            cout <<arrs[i][j]<<'\t';
        }
        cout <<endl;
    }
}




#endif // TWODIMENSION_H_INCLUDED
