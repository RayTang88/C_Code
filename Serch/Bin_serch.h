#ifndef BIN_SERCH_H_INCLUDED
#define BIN_SERCH_H_INCLUDED

#include <iostream>
using namespace std;
int bin_serch(int * ptr_num, int, int);
int bin_serch(int * ptr_num, int len, int x)
{
    int low,high,mid;
    low = 0;
    high = len-1;

    while(low <= high)
    {
        mid = (low+high)/2;
        if(x == ptr_num[mid])
        {
            return mid;
        }
        else
        {
            if(x < ptr_num[mid])
            {
                high = mid-1;
            }
            else
            {
            low = mid+1;
            }
        }

    }
        return -1;

}

#endif // BIN_SERCH_H_INCLUDED
