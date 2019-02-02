//异常处理模式abort()
#include <iostream>
using namespace std;
void show(int a)
{
    if(a == 0)
    {
        abort();

    }
    else
    {
        cout << "a" << a << endl;
    }
}
//int main()
//{
//    show(0);
//    return 0;
//}
