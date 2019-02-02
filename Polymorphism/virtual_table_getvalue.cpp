//查看虚表内的内容
#include <iostream>
using namespace std;

class Father
{
public:

    virtual void fun()
    {
        cout << "fun" <<endl;
    }
    virtual void show()
    {
        cout << "father" << endl;
    }
};

class Son : public Father
{
public:

    void show()
    {
        cout << "son" << endl;
    }
};

//  int main()
//{
//    Father* f1 = new Son;
//    //f1->show();
//    typedef void (*p);
//    ((p)(*(((int*)*((int*)f1)) + 1)))();
//    int* pp = (int*)*(((int*)*((int*)f1)) + 2);
//    cout << pp <<endl;
//    //cout << *((int*)*(int*)f1 + 0) << endl;
//    //cout << *((int*)*(int*)f1 + 1) << endl;
//    //cout << *((int*)*(int*)f1 + 2) << endl;
//    delete f1;
//    return 0;
//}
