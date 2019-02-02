#include <iostream>

using namespace std;

int main()
{
    //指针创建二位数组
    int arrays[5][3]={{1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}};
    int (*p2)[3] = arrays;
    for(int i = 0; i<5; i++){
        for(int j = 0; j < 3; j++){
            cout <<*(*(p2+i)+j)<<",";
        }
        cout <<endl;
    }

    /*
    //操作指针将数组逆序
    int arrays[]{1,2,3,4,5,6,7};
    int * ptr_arrays_start = arrays;
    int * ptr_arrays_end = arrays + 7;
    int temp;
    while(ptr_arrays_start != ptr_arrays_end){
        temp = *ptr_arrays_start;
        *ptr_arrays_start = *ptr_arrays_end;
        *ptr_arrays_end = temp;
        ptr_arrays_start++;
        ptr_arrays_end--;
    }
    for(int i = 0; i < 7; i++){
        cout <<arrays[i]<<endl;
    }
    /*
    //动态数组
    int * intarray = new int[10];
    delete [] intarray;//动态数组定义和删除的方法
    /*
    //动态内存new
    int * ptr_num = new num[5]; //定义动态内存指针
    delete ptr_num;//删除动态定义的内存指针（成对使用）

    /*
    //指针的算数运算
    double score[5]{11,22,33,44,55};
    double * ptr_score = score;
    ptr_score+=2;
    cout <<*ptr_score<<endl;
    //for(int i = 0;i < sizeof(score)/sizeof(double); i++){
        cout << *ptr_score++<<endl;
    }
    /*
    //指针和数组
    double score[5]{11,22,33,44,55};
    double * ptr_score = score;
    ptr_score[3] = 22;
    //数组占用内存空间40（一个double类型暂用8个字节，5x8=40），打印数组为打印数组的首字母的地址，;而该数组的类型为double[5].
    cout <<sizeof(score)<<endl;
    //指针内部为变量地址16，一个地址占4个字节
    cout <<sizeof(ptr_score)<<endl;
    cout <<ptr_score[3]<<endl;
    /*
    //引用（取别名）
    double num = 12;
    double & ref_num = num;
    ref_num = 13;
    cout <<ref_num<<endl;
    /*
    //void任意指针
    double num = 2.14;
    double * ptr_num = &num;
    void * vptr_num = &num;
    *ptr_num = 1232.44;
    //*vptr_num = 1213;

    cout <<boolalpha;
    cout <<(ptr_num == vptr_num)<<endl;
    cout <<*ptr_num<<endl;
    cout <<vptr_num<<endl;
    /*
    //空指针
    int * ptr_null = nullptr;
    cout << ptr_null <<endl;
    //字符型指针
    /*
    char ch = 'a';
    char * ptr_ch = &ch;
    cout << ptr_ch <<endl;
    cout <<(void *)ptr_ch <<endl;

    //定义指针
    /*
    double num = 34.23;
    double * ptr_num = &num;
    cout << "ptr's value\t" <<ptr_num <<&num<< endl;
    cout <<"ptr's point value\t"<< *ptr_num<<endl;
    */
    return 0;
}
