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
    virtual ~Father()
    {
        cout << "father delet" <<endl;
    }
};

class Son : public Father
{
public:

    void show()
    {
        cout << "son" << endl;
    }
    ~Son()
    {
        cout << "son delet" << endl;
    }
};
class Semfather
{
public:

    void show()
    {
        cout << "son" << endl;
    }
    ~Semfather()
    {
        cout << "semfather delet" << endl;
    }
};

//int main()
//{
//    Father* f1 = new Son;
//    //f1->show();
//
//    //delete f1;
//    delete (Semfather*)f1;
//    return 0;
//}
