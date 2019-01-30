#ifndef 2DIMENSION_H_INCLUDED
#define 2DIMENSION_H_INCLUDED

//2维数组的传参

//1.函数原型
void show(double (*)[5], int)
void show(double (*arrs[5]), int len)
{
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 5; j++){
            cout <<arrs[i][j]<<'\t';
        }
        cout <<endl;
    }
}


#endif // 2DIMENSION_H_INCLUDED
