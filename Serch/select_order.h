#ifndef SELECT_ORDER_H_INCLUDED
#define SELECT_ORDER_H_INCLUDED
#include <iostream>
using namespace std;

int select_order(int*, int);
int select_order(int* ptr_num, int len)
{
    for(int i = 0; i <len-1; i++)
        {
            int Minindex = i;
            for(int j = i+1; j < len; j++)
                {
                    if(ptr_num[j] < ptr_num[Minindex])
                        {
                            Minindex = j;
                        }
                }
                if(Minindex != i)
                {
                    //std::swap(ptr_num[i],ptr_num[Minindex]);
                    int tmp;
                    tmp = ptr_num[i];
                    ptr_num[i] = ptr_num[Minindex];
                    ptr_num[Minindex] = tmp;
                }

        }
        return 0;
}

#endif // SELECT_ORDER_H_INCLUDED
