#ifndef SEQUENCE_SERCH_H_INCLUDED
#define SEQUENCE_SERCH_H_INCLUDED

#include <iostream>
using namespace std;

int sequence_serch(int * ptr_num,const int len,const int x);
int sequence_serch(int * ptr_num,const int len ,const int x)
{
    int i;
    for(i = 0; i < len; i++)
        {
            cout <<"ptr_num"<< i << endl;
            if (ptr_num[i] == x)
            {
                return i;
            }
        }
    if(i == len)
    {
        return -1;
    }
}

#endif // SEQUENCE_SERCH_H_INCLUDED
